#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9EBF632273D0F552;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_F69B3A721BBC444B_CLASS_1_461088595A17A2E3_METHOD_1_E870C39937CD8BD1_OFFSET UNITYSDK_OFFSET(0x127FA500)
#define CLASS_3_F69B3A721BBC444B_CLASS_1_461088595A17A2E3__CTOR_OFFSET UNITYSDK_OFFSET(0x127FA4F0)

inline static constexpr unsigned int Class_3_F69B3A721BBC444B_Class_1_461088595A17A2E3_TypeDefinitionIndex = 70165;

class Class_3_F69B3A721BBC444B_Class_1_461088595A17A2E3 : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::Class_1_9EBF632273D0F552*>* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_CLASS_1_461088595A17A2E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E870C39937CD8BD1(::System::Boolean a1, ::Class_1_9EBF632273D0F552* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_9EBF632273D0F552*))((::PBYTE)hIl2Cpp + CLASS_3_F69B3A721BBC444B_CLASS_1_461088595A17A2E3_METHOD_1_E870C39937CD8BD1_OFFSET))(this, a1, a2);
	}
};
