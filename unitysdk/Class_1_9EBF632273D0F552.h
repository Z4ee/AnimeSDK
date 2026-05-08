#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_200;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigDynamicAccessorySkinningData; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_9EBF632273D0F552_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AAC5E0)
#define CLASS_1_9EBF632273D0F552_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x11AAC830)
#define CLASS_1_9EBF632273D0F552_METHOD_1_A93180DA360EE97C_OFFSET UNITYSDK_OFFSET(0x11AACC60)
#define CLASS_1_9EBF632273D0F552_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x11AAC820)
#define CLASS_1_9EBF632273D0F552_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11AACC50)
#define CLASS_1_9EBF632273D0F552_METHOD_1_CEA4D82439556AE1_OFFSET UNITYSDK_OFFSET(0x11AACBF0)
#define CLASS_1_9EBF632273D0F552__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAC810)

inline static constexpr unsigned int Class_1_9EBF632273D0F552_TypeDefinitionIndex = 55697;

class Class_1_9EBF632273D0F552 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_1; // 0x18
	::MoleMole::Config::ConfigDynamicAccessorySkinningData* Field_1_4; // 0x20
	::Class_1_5DA2E7556103D5A3_200* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_5; // 0x30
	::System::Int32 Field_1_7; // 0x38
	::System::Int32 Field_1_2; // 0x3C
	::System::Boolean Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_METHOD_1_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CEA4D82439556AE1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_METHOD_1_CEA4D82439556AE1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_A93180DA360EE97C(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Action_2<::System::Boolean, ::Class_1_9EBF632273D0F552*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_1_9EBF632273D0F552*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EBF632273D0F552_METHOD_1_A93180DA360EE97C_OFFSET))(this, a1, a2, a3);
	}
};
