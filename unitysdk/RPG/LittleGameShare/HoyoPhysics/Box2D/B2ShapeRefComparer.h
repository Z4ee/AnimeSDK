#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Visitor.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xB65A4A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB65A4B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xB65A490)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeRefComparer_TypeDefinitionIndex = 35220;

	class B2ShapeRefComparer : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeRefComparer** StaticGet_Shared()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeRefComparer**)Il2CppClass::FromTypeDefinitionIndex(B2ShapeRefComparer_TypeDefinitionIndex)->GetStaticField(0x5DED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
