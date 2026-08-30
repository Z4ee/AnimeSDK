#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_FIXROT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C67970)
#define RPG_GAMECORE_FIXROT2_GET_DEGREES_OFFSET UNITYSDK_OFFSET(0x3C67C80)
#define RPG_GAMECORE_FIXROT2_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1EC5A650)
#define RPG_GAMECORE_FIXROT2_GET_RADIANS_OFFSET UNITYSDK_OFFSET(0x3C67C70)
#define RPG_GAMECORE_FIXROT2_METHOD_2_00D89123D6756C9E_OFFSET UNITYSDK_OFFSET(0x3C67B50)
#define RPG_GAMECORE_FIXROT2_METHOD_2_1490F64A9B863CBE_1_OFFSET UNITYSDK_OFFSET(0x1EC5A150)
#define RPG_GAMECORE_FIXROT2_METHOD_2_1490F64A9B863CBE_OFFSET UNITYSDK_OFFSET(0x1EC5A0F0)
#define RPG_GAMECORE_FIXROT2_METHOD_2_C3CAED94F815F028_1_OFFSET UNITYSDK_OFFSET(0x1EC5A580)
#define RPG_GAMECORE_FIXROT2_METHOD_2_C3CAED94F815F028_OFFSET UNITYSDK_OFFSET(0x1EC5A4F0)
#define RPG_GAMECORE_FIXROT2_METHOD_2_C55DB3D9B4439C33_OFFSET UNITYSDK_OFFSET(0x3C67AC0)
#define RPG_GAMECORE_FIXROT2_METHOD_2_F73ABB3E14131F9A_OFFSET UNITYSDK_OFFSET(0x6B85C0)
#define RPG_GAMECORE_FIXROT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C67CB0)
#define RPG_GAMECORE_FIXROT2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC5A6F0)
#define RPG_GAMECORE_FIXROT2__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixRot2_TypeDefinitionIndex = 9885;

	struct alignas(8) FixRot2
	{
		static ::RPG::GameCore::FixRot2* StaticGet_identity()
		{
			return (::RPG::GameCore::FixRot2*)Il2CppClass::FromTypeDefinitionIndex(FixRot2_TypeDefinitionIndex)->GetStaticField(0x10C40);
		}
		::RPG::GameCore::FixPoint Cos; // 0x10
		::RPG::GameCore::FixPoint Sin; // 0x18

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2__CCTOR_OFFSET))();
		}

		::System::Void Method_2_F73ABB3E14131F9A(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_METHOD_2_F73ABB3E14131F9A_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::FixRot2 Method_2_1490F64A9B863CBE(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_METHOD_2_1490F64A9B863CBE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixRot2 Method_2_1490F64A9B863CBE_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_METHOD_2_1490F64A9B863CBE_1_OFFSET))(a1);
		}

		::System::Boolean Equals(::RPG::GameCore::FixRot2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixRot2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_EQUALS_OFFSET))(this, a1);
		}

		/*
		::RPG::GameCore::FixVec2 Method_2_C55DB3D9B4439C33(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_METHOD_2_C55DB3D9B4439C33_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::GameCore::FixVec2 Method_2_00D89123D6756C9E(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_METHOD_2_00D89123D6756C9E_OFFSET))(this, a1);
		}
		*/

		static ::RPG::GameCore::FixRot2 Method_2_C3CAED94F815F028(::RPG::GameCore::FixRot2 a1, ::RPG::GameCore::FixRot2 a2)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixRot2, ::RPG::GameCore::FixRot2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_METHOD_2_C3CAED94F815F028_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixRot2 Method_2_C3CAED94F815F028_1(::RPG::GameCore::FixRot2 a1, ::RPG::GameCore::FixRot2 a2)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixRot2, ::RPG::GameCore::FixRot2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_METHOD_2_C3CAED94F815F028_1_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixPoint get_Radians()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_GET_RADIANS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Degrees()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_GET_DEGREES_OFFSET))(this);
		}

		static ::RPG::GameCore::FixRot2 get_Identity()
		{
			return ((::RPG::GameCore::FixRot2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_GET_IDENTITY_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_TOSTRING_OFFSET))(this);
		}
	};
}
