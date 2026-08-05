#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7109EE9F6F5F9F64;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSINGLEBEHAVIOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x118D9A90)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSINGLEBEHAVIOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x118D9C60)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSINGLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x118D9C50)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowChessboardSingleBehavior_TypeDefinitionIndex = 64710;

	class ConfigHollowChessboardSingleBehavior : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowRenderSequenceConfig*>* RandomSequenceConfigList; // 0x10
		::MoleMole::HollowChessboard::HollowRenderSequenceConfig* SequenceConfig; // 0x18
		::System::Boolean UseRandom; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSINGLEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Boolean InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSINGLEBEHAVIOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}

		::System::Boolean MoleMole_HollowChessboard_IConfigHollowChessboardBehavior_InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSINGLEBEHAVIOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}
	};
}
