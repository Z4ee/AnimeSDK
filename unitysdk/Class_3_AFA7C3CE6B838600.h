#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AFA7C3CE6B838600_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x161C6650)
#define CLASS_3_AFA7C3CE6B838600_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x161C67E0)
#define CLASS_3_AFA7C3CE6B838600_METHOD_3_73D766D4F7FA3EBE_OFFSET UNITYSDK_OFFSET(0x161C6B40)
#define CLASS_3_AFA7C3CE6B838600_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x161C6AB0)
#define CLASS_3_AFA7C3CE6B838600_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161C6A20)
#define CLASS_3_AFA7C3CE6B838600__CCTOR_OFFSET UNITYSDK_OFFSET(0x161C6990)
#define CLASS_3_AFA7C3CE6B838600__CTOR_OFFSET UNITYSDK_OFFSET(0x161C6940)

inline static constexpr unsigned int Class_3_AFA7C3CE6B838600_TypeDefinitionIndex = 76053;

class Class_3_AFA7C3CE6B838600 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AFA7C3CE6B838600_TypeDefinitionIndex)->GetStaticField(0x460F0);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_73D766D4F7FA3EBE(::Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F* a1)
	{
		return ((::System::Void(*)(::Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F*))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600_METHOD_3_73D766D4F7FA3EBE_OFFSET))(a1);
	}
};
