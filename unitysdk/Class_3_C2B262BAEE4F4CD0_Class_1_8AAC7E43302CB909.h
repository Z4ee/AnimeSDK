#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_417A24669F2F689C;
class Class_2_828B2711AF58BA0B;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_8AAC7E43302CB909_METHOD_1_599006439B10876C_OFFSET UNITYSDK_OFFSET(0x12396350)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_8AAC7E43302CB909__CTOR_OFFSET UNITYSDK_OFFSET(0x12396340)

inline static constexpr unsigned int Class_3_C2B262BAEE4F4CD0_Class_1_8AAC7E43302CB909_TypeDefinitionIndex = 73302;

class Class_3_C2B262BAEE4F4CD0_Class_1_8AAC7E43302CB909 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_8AAC7E43302CB909__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Method_1_599006439B10876C(::Class_1_417A24669F2F689C* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>*(*)(::PVOID, ::Class_1_417A24669F2F689C*))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_8AAC7E43302CB909_METHOD_1_599006439B10876C_OFFSET))(this, a1);
	}
};
