#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_417A24669F2F689C;
class Class_2_2A56CCCB20A346FA;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_66C30DC889E67D1B_CLASS_1_7B9D636DD9E39F36_METHOD_1_EB9E2E57119DC1CE_OFFSET UNITYSDK_OFFSET(0x10B347C0)
#define CLASS_3_66C30DC889E67D1B_CLASS_1_7B9D636DD9E39F36__CTOR_OFFSET UNITYSDK_OFFSET(0x10B347B0)

inline static constexpr unsigned int Class_3_66C30DC889E67D1B_Class_1_7B9D636DD9E39F36_TypeDefinitionIndex = 69306;

class Class_3_66C30DC889E67D1B_Class_1_7B9D636DD9E39F36 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C30DC889E67D1B_CLASS_1_7B9D636DD9E39F36__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Method_1_EB9E2E57119DC1CE(::Class_1_417A24669F2F689C* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*(*)(::PVOID, ::Class_1_417A24669F2F689C*))((::PBYTE)hIl2Cpp + CLASS_3_66C30DC889E67D1B_CLASS_1_7B9D636DD9E39F36_METHOD_1_EB9E2E57119DC1CE_OFFSET))(this, a1);
	}
};
