#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_504D3E353AA84FB8_Struct_2_BBD456EBC9087BC2_12.h"
#include "unitysdk/System/Object.h"

class Class_1_BDE920ECA71E279C;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_504D3E353AA84FB8_METHOD_1_51ECF55170E73684_OFFSET UNITYSDK_OFFSET(0xBC345D0)
#define CLASS_1_504D3E353AA84FB8_METHOD_1_71362B53164B8F96_OFFSET UNITYSDK_OFFSET(0xBC34150)
#define CLASS_1_504D3E353AA84FB8_METHOD_1_9F4EF10E43CEE331_OFFSET UNITYSDK_OFFSET(0xBC340A0)
#define CLASS_1_504D3E353AA84FB8_METHOD_1_CB38E1A560B621D7_OFFSET UNITYSDK_OFFSET(0xBC34810)
#define CLASS_1_504D3E353AA84FB8_METHOD_1_F433A0749000FB87_OFFSET UNITYSDK_OFFSET(0xBC33FA0)
#define CLASS_1_504D3E353AA84FB8__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC34A10)

inline static constexpr unsigned int Class_1_504D3E353AA84FB8_TypeDefinitionIndex = 78578;

class Class_1_504D3E353AA84FB8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_504D3E353AA84FB8_Struct_2_BBD456EBC9087BC2_12>** StaticGet_DMPIGOFPLLB()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_504D3E353AA84FB8_Struct_2_BBD456EBC9087BC2_12>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_504D3E353AA84FB8_TypeDefinitionIndex)->GetStaticField(0x47B10);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>** StaticGet_CAPEMEGKBPD()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_504D3E353AA84FB8_TypeDefinitionIndex)->GetStaticField(0x47B18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_504D3E353AA84FB8__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F433A0749000FB87(::RPG::GameCore::GameEntity* a1, ::Class_1_504D3E353AA84FB8_Struct_2_BBD456EBC9087BC2_12 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::Class_1_504D3E353AA84FB8_Struct_2_BBD456EBC9087BC2_12))((::PBYTE)hIl2Cpp + CLASS_1_504D3E353AA84FB8_METHOD_1_F433A0749000FB87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9F4EF10E43CEE331(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_504D3E353AA84FB8_METHOD_1_9F4EF10E43CEE331_OFFSET))(a1);
	}

	static ::Class_1_BDE920ECA71E279C* Method_1_71362B53164B8F96(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_BDE920ECA71E279C*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_504D3E353AA84FB8_METHOD_1_71362B53164B8F96_OFFSET))(a1, a2);
	}

	static ::Class_1_BDE920ECA71E279C* Method_1_51ECF55170E73684(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_BDE920ECA71E279C*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_504D3E353AA84FB8_METHOD_1_51ECF55170E73684_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CB38E1A560B621D7(::Class_1_BDE920ECA71E279C* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::Class_1_BDE920ECA71E279C*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_504D3E353AA84FB8_METHOD_1_CB38E1A560B621D7_OFFSET))(a1, a2);
	}
};
