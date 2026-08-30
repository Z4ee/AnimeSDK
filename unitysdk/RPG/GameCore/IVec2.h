#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_IVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B98EB0)
#define RPG_GAMECORE_IVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B98EA0)
#define RPG_GAMECORE_IVEC2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1D785BE0)
#define RPG_GAMECORE_IVEC2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B98C60)
#define RPG_GAMECORE_IVEC2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D785BF0)
#define RPG_GAMECORE_IVEC2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1D785BC0)
#define RPG_GAMECORE_IVEC2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D785C00)
#define RPG_GAMECORE_IVEC2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1D785BD0)
#define RPG_GAMECORE_IVEC2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1D785BB0)
#define RPG_GAMECORE_IVEC2_METHOD_2_024C03B35BA7E8CB_1_OFFSET UNITYSDK_OFFSET(0x1D785B70)
#define RPG_GAMECORE_IVEC2_METHOD_2_024C03B35BA7E8CB_OFFSET UNITYSDK_OFFSET(0x1D785B60)
#define RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_1_OFFSET UNITYSDK_OFFSET(0x1D785A20)
#define RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_2_OFFSET UNITYSDK_OFFSET(0x1D785A90)
#define RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_3_OFFSET UNITYSDK_OFFSET(0x1D785AB0)
#define RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_OFFSET UNITYSDK_OFFSET(0x1D7859E0)
#define RPG_GAMECORE_IVEC2_METHOD_2_3051A2902CE8D9BA_OFFSET UNITYSDK_OFFSET(0x1D785B80)
#define RPG_GAMECORE_IVEC2_METHOD_2_3F8D159D821A0AF1_1_OFFSET UNITYSDK_OFFSET(0x1D785B10)
#define RPG_GAMECORE_IVEC2_METHOD_2_3F8D159D821A0AF1_2_OFFSET UNITYSDK_OFFSET(0x1D785B30)
#define RPG_GAMECORE_IVEC2_METHOD_2_3F8D159D821A0AF1_OFFSET UNITYSDK_OFFSET(0x1D785AF0)
#define RPG_GAMECORE_IVEC2_METHOD_2_66B1445F39DF8265_1_OFFSET UNITYSDK_OFFSET(0x1D785AD0)
#define RPG_GAMECORE_IVEC2_METHOD_2_66B1445F39DF8265_OFFSET UNITYSDK_OFFSET(0x1D785A60)
#define RPG_GAMECORE_IVEC2_METHOD_2_970B895AF1841F3E_OFFSET UNITYSDK_OFFSET(0x7DC40)
#define RPG_GAMECORE_IVEC2_METHOD_2_D0F004595ECA8F03_OFFSET UNITYSDK_OFFSET(0x1D785B90)
#define RPG_GAMECORE_IVEC2_METHOD_2_F12688DACEC2651B_OFFSET UNITYSDK_OFFSET(0x3B98E00)
#define RPG_GAMECORE_IVEC2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B98CE0)
#define RPG_GAMECORE_IVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B98D60)
#define RPG_GAMECORE_IVEC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D785C10)
#define RPG_GAMECORE_IVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IVec2_TypeDefinitionIndex = 6540;

	struct alignas(4) IVec2
	{
		static ::RPG::GameCore::IVec2* StaticGet_oneVector()
		{
			return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(IVec2_TypeDefinitionIndex)->GetStaticField(0xACB0);
		}
		static ::RPG::GameCore::IVec2* StaticGet_rightVector()
		{
			return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(IVec2_TypeDefinitionIndex)->GetStaticField(0xACB8);
		}
		static ::RPG::GameCore::IVec2* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(IVec2_TypeDefinitionIndex)->GetStaticField(0xACC0);
		}
		static ::RPG::GameCore::IVec2* StaticGet_downVector()
		{
			return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(IVec2_TypeDefinitionIndex)->GetStaticField(0xACC8);
		}
		static ::RPG::GameCore::IVec2* StaticGet_upVector()
		{
			return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(IVec2_TypeDefinitionIndex)->GetStaticField(0xACD0);
		}
		static ::RPG::GameCore::IVec2* StaticGet_leftVector()
		{
			return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(IVec2_TypeDefinitionIndex)->GetStaticField(0xACD8);
		}
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2__CCTOR_OFFSET))();
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_970B895AF1841F3E(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_970B895AF1841F3E_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_2_F12688DACEC2651B(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_F12688DACEC2651B_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::IVec2 Method_2_11C163D56F5D9DA9(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::IVec2 Method_2_11C163D56F5D9DA9_1(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::IVec2 Method_2_66B1445F39DF8265(::RPG::GameCore::IVec2 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_66B1445F39DF8265_OFFSET))(a1);
		}

		static ::RPG::GameCore::IVec2 Method_2_11C163D56F5D9DA9_2(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::IVec2 Method_2_11C163D56F5D9DA9_3(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_11C163D56F5D9DA9_3_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::IVec2 Method_2_66B1445F39DF8265_1(::RPG::GameCore::IVec2 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_66B1445F39DF8265_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::IVec2 Method_2_3F8D159D821A0AF1(::RPG::GameCore::IVec2 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_3F8D159D821A0AF1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::IVec2 Method_2_3F8D159D821A0AF1_1(::System::Int32 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::System::Int32, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_3F8D159D821A0AF1_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::IVec2 Method_2_3F8D159D821A0AF1_2(::RPG::GameCore::IVec2 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_3F8D159D821A0AF1_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_024C03B35BA7E8CB(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_024C03B35BA7E8CB_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_024C03B35BA7E8CB_1(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_024C03B35BA7E8CB_1_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::IVec2 Method_2_3051A2902CE8D9BA(::RPG::IVec3 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_3051A2902CE8D9BA_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::MVector3 Method_2_D0F004595ECA8F03(::RPG::GameCore::IVec2 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_METHOD_2_D0F004595ECA8F03_OFFSET))(a1);
		}
		*/

		static ::RPG::GameCore::IVec2 get_zero()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_ZERO_OFFSET))();
		}

		static ::RPG::GameCore::IVec2 get_one()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_ONE_OFFSET))();
		}

		static ::RPG::GameCore::IVec2 get_up()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_UP_OFFSET))();
		}

		static ::RPG::GameCore::IVec2 get_down()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_DOWN_OFFSET))();
		}

		static ::RPG::GameCore::IVec2 get_left()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_LEFT_OFFSET))();
		}

		static ::RPG::GameCore::IVec2 get_right()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_RIGHT_OFFSET))();
		}
	};
}
