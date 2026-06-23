#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C00C44C10E42328.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_008187F6EB77F9CD.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_934291CCF12CB02E;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7AB67A526C6B0A15_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1592E520)
#define CLASS_3_7AB67A526C6B0A15_METHOD_3_72ECEEB9A83E04BB_OFFSET UNITYSDK_OFFSET(0x1592E560)
#define CLASS_3_7AB67A526C6B0A15_METHOD_3_75AB063540972CAE_OFFSET UNITYSDK_OFFSET(0x1592E0F0)
#define CLASS_3_7AB67A526C6B0A15_METHOD_3_8E9DBC78F981FD90_OFFSET UNITYSDK_OFFSET(0x1592DED0)
#define CLASS_3_7AB67A526C6B0A15_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1592E4E0)
#define CLASS_3_7AB67A526C6B0A15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1592E420)
#define CLASS_3_7AB67A526C6B0A15__CTOR_OFFSET UNITYSDK_OFFSET(0x1592DE00)

inline static constexpr unsigned int Class_3_7AB67A526C6B0A15_TypeDefinitionIndex = 86003;

class Class_3_7AB67A526C6B0A15 : public ::Class_2_9C00C44C10E42328
{
public:
	::MoleMole::EntityHandle Field_3_0; // 0x18
	::Class_1_934291CCF12CB02E* Field_3_1; // 0x28

	::System::Void _ctor(::MoleMole::EntityHandle& a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_7AB67A526C6B0A15__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_8E9DBC78F981FD90(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_7AB67A526C6B0A15_METHOD_3_8E9DBC78F981FD90_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7AB67A526C6B0A15_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7AB67A526C6B0A15_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7AB67A526C6B0A15_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_3_72ECEEB9A83E04BB(::UnityEngine::RaycastHit& a1, ::Class_1_934291CCF12CB02E*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::Class_1_934291CCF12CB02E*&))((::PBYTE)hIl2Cpp + CLASS_3_7AB67A526C6B0A15_METHOD_3_72ECEEB9A83E04BB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_75AB063540972CAE(::Struct_2_008187F6EB77F9CD& a1, ::Class_1_934291CCF12CB02E*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_008187F6EB77F9CD&, ::Class_1_934291CCF12CB02E*&))((::PBYTE)hIl2Cpp + CLASS_3_7AB67A526C6B0A15_METHOD_3_75AB063540972CAE_OFFSET))(this, a1, a2);
	}
};
