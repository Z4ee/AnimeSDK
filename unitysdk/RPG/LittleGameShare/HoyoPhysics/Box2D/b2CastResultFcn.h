#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7998E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7999C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C796B80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C799870)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2CastResultFcn_TypeDefinitionIndex = 35963;

	class b2CastResultFcn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::System::Single a4, ::System::Object* a5)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::System::Single a4, ::System::Object* a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CASTRESULTFCN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
