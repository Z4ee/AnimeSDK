#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigInLevelCustomized; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_56FC5342C3EBE897_METHOD_1_346D260AD27D5266_OFFSET UNITYSDK_OFFSET(0x1623C340)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_766B5970FDA4855C_OFFSET UNITYSDK_OFFSET(0x1623C110)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x1623C120)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_9E815F7B26C84192_OFFSET UNITYSDK_OFFSET(0x1623C2F0)
#define CLASS_1_56FC5342C3EBE897_METHOD_1_B4EA20209C2120DF_OFFSET UNITYSDK_OFFSET(0x1623C2E0)

inline static constexpr unsigned int Class_1_56FC5342C3EBE897_TypeDefinitionIndex = 73532;

class Class_1_56FC5342C3EBE897 : public ::System::Object
{
public:
	static ::MoleMole::ConfigInLevelCustomized** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigInLevelCustomized**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FC5342C3EBE897_TypeDefinitionIndex)->GetStaticField(0x319A0);
	}

	static ::MoleMole::ConfigInLevelCustomized* Method_1_766B5970FDA4855C()
	{
		return ((::MoleMole::ConfigInLevelCustomized*(*)())((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_766B5970FDA4855C_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B4EA20209C2120DF(::MoleMole::ConfigInLevelCustomized* a1)
	{
		return ((::System::Void(*)(::MoleMole::ConfigInLevelCustomized*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_B4EA20209C2120DF_OFFSET))(a1);
	}

	static ::System::Void Method_1_9E815F7B26C84192(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_9E815F7B26C84192_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_346D260AD27D5266(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_METHOD_1_346D260AD27D5266_OFFSET))(a1, a2, a3, a4);
	}
};
