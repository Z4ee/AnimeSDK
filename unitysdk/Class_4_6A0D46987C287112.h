#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8350EB57484CE308.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_6A0D46987C287112_METHOD_4_2BDA35FF9FE4DFDF_OFFSET UNITYSDK_OFFSET(0x13BB5C00)
#define CLASS_4_6A0D46987C287112_METHOD_4_434418B9F988BA13_OFFSET UNITYSDK_OFFSET(0x13BB5780)
#define CLASS_4_6A0D46987C287112_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x13BB5BB0)
#define CLASS_4_6A0D46987C287112_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x13BB56C0)
#define CLASS_4_6A0D46987C287112_METHOD_4_75FAC9CCCCA6B3B6_OFFSET UNITYSDK_OFFSET(0x13BB5BF0)
#define CLASS_4_6A0D46987C287112__CTOR_OFFSET UNITYSDK_OFFSET(0x13BB27B0)

inline static constexpr unsigned int Class_4_6A0D46987C287112_TypeDefinitionIndex = 72159;

class Class_4_6A0D46987C287112 : public ::Class_3_8350EB57484CE308
{
public:
	::Class_2_B66C1067C0468FBB* Field_4_0; // 0x30
	::Class_1_2CE61CB9B2E57F36* Field_4_1; // 0x38

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::Class_1_2CE61CB9B2E57F36* a2, ::Class_1_A92BC063ED2379EB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_2CE61CB9B2E57F36*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_4_434418B9F988BA13(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_434418B9F988BA13_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_75FAC9CCCCA6B3B6(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_75FAC9CCCCA6B3B6_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_4_2BDA35FF9FE4DFDF()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_2BDA35FF9FE4DFDF_OFFSET))(this);
	}
};
