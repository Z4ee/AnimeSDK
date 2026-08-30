#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8350EB57484CE308.h"

class Class_1_A92BC063ED2379EB;
class Class_1_B58468E7171EFB5E;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_6A0D46987C287112_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x180AA8C0)
#define CLASS_4_6A0D46987C287112_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x180AA220)
#define CLASS_4_6A0D46987C287112_METHOD_4_8C3C0761F464DDB5_OFFSET UNITYSDK_OFFSET(0x180AA2E0)
#define CLASS_4_6A0D46987C287112__CTOR_OFFSET UNITYSDK_OFFSET(0x180A6BB0)

inline static constexpr unsigned int Class_4_6A0D46987C287112_TypeDefinitionIndex = 77168;

class Class_4_6A0D46987C287112 : public ::Class_3_8350EB57484CE308
{
public:
	::Class_2_B66C1067C0468FBB* GDCCJFKJGPD; // 0x30
	::Class_1_B58468E7171EFB5E* LJCOKIPHCCN; // 0x38

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::Class_1_B58468E7171EFB5E* a2, ::Class_1_A92BC063ED2379EB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_B58468E7171EFB5E*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_4_8C3C0761F464DDB5(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_8C3C0761F464DDB5_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}
};
