#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITeleportPointTipChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F3B3BCFD130F6619_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128B5FC0)
#define CLASS_1_F3B3BCFD130F6619_METHOD_1_17B834FF3D46EE44_OFFSET UNITYSDK_OFFSET(0x128B61D0)
#define CLASS_1_F3B3BCFD130F6619_METHOD_1_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0x128B6270)
#define CLASS_1_F3B3BCFD130F6619_METHOD_1_8267FAF4A8FB8C51_OFFSET UNITYSDK_OFFSET(0x128B6110)
#define CLASS_1_F3B3BCFD130F6619_METHOD_1_AEF0637372378B8B_OFFSET UNITYSDK_OFFSET(0x128B63E0)
#define CLASS_1_F3B3BCFD130F6619__CTOR_OFFSET UNITYSDK_OFFSET(0x128B5E50)

inline static constexpr unsigned int Class_1_F3B3BCFD130F6619_TypeDefinitionIndex = 41717;

class Class_1_F3B3BCFD130F6619 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UITeleportPointTipChildWindowController*>* Field_1_2; // 0x10
	::MoleMole::UIWindowController* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UITeleportPointTipChildWindowController*>* Field_1_3; // 0x20
	::UnityEngine::Transform* Field_1_0; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_F3B3BCFD130F6619__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3B3BCFD130F6619_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8267FAF4A8FB8C51(::MoleMole::UITeleportPointTipChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITeleportPointTipChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_F3B3BCFD130F6619_METHOD_1_8267FAF4A8FB8C51_OFFSET))(this, a1);
	}

	::System::Void Method_1_17B834FF3D46EE44(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_F3B3BCFD130F6619_METHOD_1_17B834FF3D46EE44_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3B3BCFD130F6619_METHOD_1_3F61F56295827FBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEF0637372378B8B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_F3B3BCFD130F6619_METHOD_1_AEF0637372378B8B_OFFSET))(this, a1);
	}
};
