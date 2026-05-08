#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_29A17F430E183330;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_5A01EC14E744BD31_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12C955C0)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_37854AE92C8E73BC_OFFSET UNITYSDK_OFFSET(0x12C95A30)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_46C2535CC7FB8DA8_OFFSET UNITYSDK_OFFSET(0x12C960E0)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_51782FF51852DF2E_OFFSET UNITYSDK_OFFSET(0x12C95E90)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_7A82C6E3D6B612CA_OFFSET UNITYSDK_OFFSET(0x12C95990)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12C95E00)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C95900)
#define CLASS_3_5A01EC14E744BD31_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C95750)
#define CLASS_3_5A01EC14E744BD31__CTOR_OFFSET UNITYSDK_OFFSET(0x12C958B0)

inline static constexpr unsigned int Class_3_5A01EC14E744BD31_TypeDefinitionIndex = 76527;

class Class_3_5A01EC14E744BD31 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_7A82C6E3D6B612CA(::Class_3_29A17F430E183330* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_3_29A17F430E183330*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_7A82C6E3D6B612CA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_37854AE92C8E73BC(::Class_3_29A17F430E183330* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_3_29A17F430E183330*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_37854AE92C8E73BC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_51782FF51852DF2E(::Class_3_29A17F430E183330* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_29A17F430E183330*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_51782FF51852DF2E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_46C2535CC7FB8DA8(::System::Single a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_46C2535CC7FB8DA8_OFFSET))(a1, a2);
	}
};
