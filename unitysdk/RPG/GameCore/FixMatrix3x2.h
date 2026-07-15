#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_FIXMATRIX3X2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3ACE2C0)
#define RPG_GAMECORE_FIXMATRIX3X2_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1CEE5270)
#define RPG_GAMECORE_FIXMATRIX3X2_GET_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x3ACE300)
#define RPG_GAMECORE_FIXMATRIX3X2_METHOD_2_A95AF245556BB0A6_OFFSET UNITYSDK_OFFSET(0x1CEE56D0)
#define RPG_GAMECORE_FIXMATRIX3X2_METHOD_2_E712529611B9063F_OFFSET UNITYSDK_OFFSET(0x1CEE5BE0)
#define RPG_GAMECORE_FIXMATRIX3X2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE66E0)
#define RPG_GAMECORE_FIXMATRIX3X2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3ACE700)
#define RPG_GAMECORE_FIXMATRIX3X2__CTOR_OFFSET UNITYSDK_OFFSET(0x2F01EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixMatrix3x2_TypeDefinitionIndex = 9601;

	struct alignas(8) FixMatrix3x2
	{
		static ::RPG::GameCore::FixMatrix3x2* StaticGet__identity()
		{
			return (::RPG::GameCore::FixMatrix3x2*)Il2CppClass::FromTypeDefinitionIndex(FixMatrix3x2_TypeDefinitionIndex)->GetStaticField(0x8C10);
		}
		::RPG::GameCore::FixPoint M11; // 0x10
		::RPG::GameCore::FixPoint M12; // 0x18
		::RPG::GameCore::FixPoint M21; // 0x20
		::RPG::GameCore::FixPoint M22; // 0x28
		::RPG::GameCore::FixPoint M31; // 0x30
		::RPG::GameCore::FixPoint M32; // 0x38

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::RPG::GameCore::FixMatrix3x2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixMatrix3x2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixMatrix3x2 get_Identity()
		{
			return ((::RPG::GameCore::FixMatrix3x2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_GET_IDENTITY_OFFSET))();
		}

		::System::Boolean get_IsIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_GET_ISIDENTITY_OFFSET))(this);
		}

		static ::System::Void Method_2_A95AF245556BB0A6(::RPG::GameCore::FixMatrix3x2& a1, ::RPG::GameCore::FixMatrix3x2& a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixMatrix3x2&, ::RPG::GameCore::FixMatrix3x2&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_METHOD_2_A95AF245556BB0A6_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixMatrix3x2 Method_2_E712529611B9063F(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixMatrix3x2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_METHOD_2_E712529611B9063F_OFFSET))(a1);
		}
	};
}
