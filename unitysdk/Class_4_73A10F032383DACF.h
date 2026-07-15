#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8350EB57484CE308.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_73A10F032383DACF_METHOD_4_29B5EFE40A60A0E9_OFFSET UNITYSDK_OFFSET(0x15B12310)
#define CLASS_4_73A10F032383DACF_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x15B11A00)
#define CLASS_4_73A10F032383DACF_METHOD_4_55895F3E907E4B70_OFFSET UNITYSDK_OFFSET(0x15B11BA0)
#define CLASS_4_73A10F032383DACF_METHOD_4_EF9343BCAC0349DA_OFFSET UNITYSDK_OFFSET(0x15B11A40)
#define CLASS_4_73A10F032383DACF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B11960)

inline static constexpr unsigned int Class_4_73A10F032383DACF_TypeDefinitionIndex = 73680;

class Class_4_73A10F032383DACF : public ::Class_3_8350EB57484CE308
{
public:
	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Field_4_0; // 0x30
	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Field_4_1; // 0x38
	::Class_2_B66C1067C0468FBB* Field_4_2; // 0x40

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a3, ::Class_1_A92BC063ED2379EB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_B66C1067C0468FBB* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_EF9343BCAC0349DA(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_EF9343BCAC0349DA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_4_55895F3E907E4B70(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_55895F3E907E4B70_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_4_29B5EFE40A60A0E9(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_29B5EFE40A60A0E9_OFFSET))(this, a1);
	}
};
