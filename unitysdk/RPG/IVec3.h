#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_IVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x38DA760)
#define RPG_IVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38DA740)
#define RPG_IVEC3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x14BE72C0)
#define RPG_IVEC3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x14BE7300)
#define RPG_IVEC3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x14BE72A0)
#define RPG_IVEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x38DA620)
#define RPG_IVEC3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x14BE7320)
#define RPG_IVEC3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x14BE7280)
#define RPG_IVEC3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x14BE7340)
#define RPG_IVEC3_GET_UP_OFFSET UNITYSDK_OFFSET(0x14BE72E0)
#define RPG_IVEC3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x14BE7260)
#define RPG_IVEC3_METHOD_2_3AF7C73D7E1DAB11_1_OFFSET UNITYSDK_OFFSET(0x14BE73A0)
#define RPG_IVEC3_METHOD_2_3AF7C73D7E1DAB11_OFFSET UNITYSDK_OFFSET(0x14BE7230)
#define RPG_IVEC3_METHOD_2_6EB8CFA46BD6F6EA_OFFSET UNITYSDK_OFFSET(0x6ED5C0)
#define RPG_IVEC3_METHOD_2_7D12E28C4CB15D9C_OFFSET UNITYSDK_OFFSET(0x14BE7460)
#define RPG_IVEC3_METHOD_2_C68DD56EA29E5F53_OFFSET UNITYSDK_OFFSET(0x14BE7440)
#define RPG_IVEC3_METHOD_2_D466FBA41248FC85_1_OFFSET UNITYSDK_OFFSET(0x14BE71F0)
#define RPG_IVEC3_METHOD_2_D466FBA41248FC85_2_OFFSET UNITYSDK_OFFSET(0x14BE7360)
#define RPG_IVEC3_METHOD_2_D466FBA41248FC85_3_OFFSET UNITYSDK_OFFSET(0x14BE7380)
#define RPG_IVEC3_METHOD_2_D466FBA41248FC85_OFFSET UNITYSDK_OFFSET(0x14BE71B0)
#define RPG_IVEC3_METHOD_2_E16EA785DA81BE97_1_OFFSET UNITYSDK_OFFSET(0x14BE73F0)
#define RPG_IVEC3_METHOD_2_E16EA785DA81BE97_2_OFFSET UNITYSDK_OFFSET(0x14BE7410)
#define RPG_IVEC3_METHOD_2_E16EA785DA81BE97_OFFSET UNITYSDK_OFFSET(0x14BE73C0)
#define RPG_IVEC3_METHOD_2_F2B81C853D103105_OFFSET UNITYSDK_OFFSET(0x38DA7A0)
#define RPG_IVEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x38DA6A0)
#define RPG_IVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38DA790)
#define RPG_IVEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BE75F0)
#define RPG_IVEC3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38DA730)
#define RPG_IVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED5C0)

namespace RPG
{
	inline static constexpr unsigned int IVec3_TypeDefinitionIndex = 6762;

	struct alignas(4) IVec3
	{
		static ::RPG::IVec3* StaticGet_leftVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x3330);
		}
		static ::RPG::IVec3* StaticGet_downVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x333C);
		}
		static ::RPG::IVec3* StaticGet_backVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x3348);
		}
		static ::RPG::IVec3* StaticGet_oneVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x3354);
		}
		static ::RPG::IVec3* StaticGet_forwardVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x3360);
		}
		static ::RPG::IVec3* StaticGet_upVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x336C);
		}
		static ::RPG::IVec3* StaticGet_rightVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x3378);
		}
		static ::RPG::IVec3* StaticGet_zeroVector()
		{
			return (::RPG::IVec3*)Il2CppClass::FromTypeDefinitionIndex(IVec3_TypeDefinitionIndex)->GetStaticField(0x3384);
		}
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3__CCTOR_OFFSET))();
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6EB8CFA46BD6F6EA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_6EB8CFA46BD6F6EA_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_IVEC3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_IVEC3_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::IVec3 Method_2_D466FBA41248FC85(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_D466FBA41248FC85_OFFSET))(a1, a2);
		}

		static ::RPG::IVec3 Method_2_D466FBA41248FC85_1(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_D466FBA41248FC85_1_OFFSET))(a1, a2);
		}

		static ::RPG::IVec3 Method_2_3AF7C73D7E1DAB11(::RPG::IVec3 a1)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_3AF7C73D7E1DAB11_OFFSET))(a1);
		}

		static ::RPG::IVec3 get_zero()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_ZERO_OFFSET))();
		}

		static ::RPG::IVec3 get_one()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_ONE_OFFSET))();
		}

		static ::RPG::IVec3 get_forward()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_FORWARD_OFFSET))();
		}

		static ::RPG::IVec3 get_back()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_BACK_OFFSET))();
		}

		static ::RPG::IVec3 get_up()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_UP_OFFSET))();
		}

		static ::RPG::IVec3 get_down()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_DOWN_OFFSET))();
		}

		static ::RPG::IVec3 get_left()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_LEFT_OFFSET))();
		}

		static ::RPG::IVec3 get_right()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_RIGHT_OFFSET))();
		}

		static ::RPG::IVec3 Method_2_D466FBA41248FC85_2(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_D466FBA41248FC85_2_OFFSET))(a1, a2);
		}

		static ::RPG::IVec3 Method_2_D466FBA41248FC85_3(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_D466FBA41248FC85_3_OFFSET))(a1, a2);
		}

		static ::RPG::IVec3 Method_2_3AF7C73D7E1DAB11_1(::RPG::IVec3 a1)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_3AF7C73D7E1DAB11_1_OFFSET))(a1);
		}

		static ::RPG::IVec3 Method_2_E16EA785DA81BE97(::RPG::IVec3 a1, ::System::Int32 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_E16EA785DA81BE97_OFFSET))(a1, a2);
		}

		static ::RPG::IVec3 Method_2_E16EA785DA81BE97_1(::System::Int32 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::System::Int32, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_E16EA785DA81BE97_1_OFFSET))(a1, a2);
		}

		static ::RPG::IVec3 Method_2_E16EA785DA81BE97_2(::RPG::IVec3 a1, ::System::Int32 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_E16EA785DA81BE97_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_C68DD56EA29E5F53(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_C68DD56EA29E5F53_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_7D12E28C4CB15D9C(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_7D12E28C4CB15D9C_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_IVEC3_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_2_F2B81C853D103105(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_IVEC3_METHOD_2_F2B81C853D103105_OFFSET))(this, a1);
		}
	};
}
