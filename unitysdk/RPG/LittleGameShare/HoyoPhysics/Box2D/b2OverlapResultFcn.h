#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C79A2E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C79A360)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C795A70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79A270)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2OverlapResultFcn_TypeDefinitionIndex = 35962;

	class b2OverlapResultFcn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2OVERLAPRESULTFCN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
