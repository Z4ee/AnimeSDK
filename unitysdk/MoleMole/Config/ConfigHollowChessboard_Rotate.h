#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase_DurationType.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xF97D940)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0xF97D930)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_RUN_OFFSET UNITYSDK_OFFSET(0xF97D7B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xF97D9E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0xF97DA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_Rotate_TypeDefinitionIndex = 43423;

	class ConfigHollowChessboard_Rotate : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::UnityEngine::AnimationCurve* zRotationCurve; // 0x20
		::UnityEngine::AnimationCurve* yRotationCurve; // 0x28
		::UnityEngine::AnimationCurve* xRotationCurve; // 0x30
		::System::Single time; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase_DurationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
