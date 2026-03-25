#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D20C31AB177E464_Struct_2_BBD456EBC9087BC2_8.h"
#include "unitysdk/System/Object.h"

class Class_1_FD4B9EC97CC7C706;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2D20C31AB177E464_METHOD_1_4BE13899A6097DAD_OFFSET UNITYSDK_OFFSET(0x115A5E00)
#define CLASS_1_2D20C31AB177E464_METHOD_1_5B28FD6D66BEEE54_OFFSET UNITYSDK_OFFSET(0x115A58E0)
#define CLASS_1_2D20C31AB177E464_METHOD_1_71362B53164B8F96_OFFSET UNITYSDK_OFFSET(0x115A5990)
#define CLASS_1_2D20C31AB177E464_METHOD_1_9D311773932CE9E7_OFFSET UNITYSDK_OFFSET(0x115A6060)
#define CLASS_1_2D20C31AB177E464_METHOD_1_F433A0749000FB87_OFFSET UNITYSDK_OFFSET(0x115A57E0)
#define CLASS_1_2D20C31AB177E464__CCTOR_OFFSET UNITYSDK_OFFSET(0x115A6260)

inline static constexpr unsigned int Class_1_2D20C31AB177E464_TypeDefinitionIndex = 64027;

class Class_1_2D20C31AB177E464 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_2D20C31AB177E464_Struct_2_BBD456EBC9087BC2_8>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_2D20C31AB177E464_Struct_2_BBD456EBC9087BC2_8>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D20C31AB177E464_TypeDefinitionIndex)->GetStaticField(0x44870);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D20C31AB177E464_TypeDefinitionIndex)->GetStaticField(0x44878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D20C31AB177E464__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F433A0749000FB87(::RPG::GameCore::GameEntity* a1, ::Class_1_2D20C31AB177E464_Struct_2_BBD456EBC9087BC2_8 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::Class_1_2D20C31AB177E464_Struct_2_BBD456EBC9087BC2_8))((::PBYTE)hIl2Cpp + CLASS_1_2D20C31AB177E464_METHOD_1_F433A0749000FB87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5B28FD6D66BEEE54(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2D20C31AB177E464_METHOD_1_5B28FD6D66BEEE54_OFFSET))(a1);
	}

	static ::Class_1_FD4B9EC97CC7C706* Method_1_71362B53164B8F96(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_FD4B9EC97CC7C706*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2D20C31AB177E464_METHOD_1_71362B53164B8F96_OFFSET))(a1, a2);
	}

	static ::Class_1_FD4B9EC97CC7C706* Method_1_4BE13899A6097DAD(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_FD4B9EC97CC7C706*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2D20C31AB177E464_METHOD_1_4BE13899A6097DAD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9D311773932CE9E7(::Class_1_FD4B9EC97CC7C706* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::Class_1_FD4B9EC97CC7C706*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2D20C31AB177E464_METHOD_1_9D311773932CE9E7_OFFSET))(a1, a2);
	}
};
