#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class MonoScoreStar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOIMAGERATE_SETSTAR_OFFSET UNITYSDK_OFFSET(0x16CD90F0)
#define MOLEMOLE_MONOIMAGERATE_SETTOTALSTAR_OFFSET UNITYSDK_OFFSET(0x16CD92B0)
#define MOLEMOLE_MONOIMAGERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD93D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoImageRate_TypeDefinitionIndex = 45332;

	class MonoImageRate : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MonoScoreStar*>* controlGameObject; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOIMAGERATE__CTOR_OFFSET))(this);
		}

		::System::Void SetStar(::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOIMAGERATE_SETSTAR_OFFSET))(this, num);
		}

		::System::Void SetTotalStar(::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOIMAGERATE_SETTOTALSTAR_OFFSET))(this, num);
		}
	};
}
