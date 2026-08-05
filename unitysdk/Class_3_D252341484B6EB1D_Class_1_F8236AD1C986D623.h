#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_D252341484B6EB1D;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_D252341484B6EB1D_CLASS_1_F8236AD1C986D623_METHOD_1_18EBBC0616B3CD91_OFFSET UNITYSDK_OFFSET(0xF7B19C0)
#define CLASS_3_D252341484B6EB1D_CLASS_1_F8236AD1C986D623_METHOD_1_D47D98058CFD0571_OFFSET UNITYSDK_OFFSET(0xF7B1A30)
#define CLASS_3_D252341484B6EB1D_CLASS_1_F8236AD1C986D623__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AFAE0)

inline static constexpr unsigned int Class_3_D252341484B6EB1D_Class_1_F8236AD1C986D623_TypeDefinitionIndex = 46303;

class Class_3_D252341484B6EB1D_Class_1_F8236AD1C986D623 : public ::System::Object
{
public:
	::Class_3_D252341484B6EB1D* Field_1_7; // 0x10
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_1_5; // 0x18
	::MoleMole::EntityHandle Field_1_6; // 0x20
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D252341484B6EB1D_CLASS_1_F8236AD1C986D623__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_18EBBC0616B3CD91(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D252341484B6EB1D_CLASS_1_F8236AD1C986D623_METHOD_1_18EBBC0616B3CD91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D47D98058CFD0571(::Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_298E954BC26AE9BA_Struct_2_4F51CF67323EB580))((::PBYTE)hIl2Cpp + CLASS_3_D252341484B6EB1D_CLASS_1_F8236AD1C986D623_METHOD_1_D47D98058CFD0571_OFFSET))(this, a1);
	}
};
