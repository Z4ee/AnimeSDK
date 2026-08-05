#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A2C8292EF929042.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_600;
class Class_1_6A3A26AD0CB7F995;
class Class_1_7BB1FDFF031F38EB;
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_10E552FF2A1B8136_METHOD_1_1C494771E5DE0FDE_OFFSET UNITYSDK_OFFSET(0x14227660)
#define CLASS_1_10E552FF2A1B8136_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x14228040)
#define CLASS_1_10E552FF2A1B8136_METHOD_1_6120657EA7C99637_OFFSET UNITYSDK_OFFSET(0x14227EC0)
#define CLASS_1_10E552FF2A1B8136_METHOD_1_9F35D560C1A1DBEC_OFFSET UNITYSDK_OFFSET(0x142282C0)
#define CLASS_1_10E552FF2A1B8136_METHOD_1_D2F5EC9A721C1561_OFFSET UNITYSDK_OFFSET(0x14228340)
#define CLASS_1_10E552FF2A1B8136_METHOD_1_E3089A2C97C0F3D6_OFFSET UNITYSDK_OFFSET(0x142278F0)
#define CLASS_1_10E552FF2A1B8136_METHOD_1_ED86EC5BE26E3939_OFFSET UNITYSDK_OFFSET(0x14227B90)
#define CLASS_1_10E552FF2A1B8136__CTOR_OFFSET UNITYSDK_OFFSET(0x142275A0)

inline static constexpr unsigned int Class_1_10E552FF2A1B8136_TypeDefinitionIndex = 73102;

class Class_1_10E552FF2A1B8136 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_600* Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_600* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_4A2C8292EF929042, ::Class_0_16E4307DCC419505_600*>* Field_1_3; // 0x28
	::MoleMole::Battle::Entity* Field_1_6; // 0x30
	::MoleMole::UIWindowController* Field_1_2; // 0x38

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2, ::Class_0_16E4307DCC419505_600* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_600* Method_1_1C494771E5DE0FDE(::Class_1_7BB1FDFF031F38EB* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::Class_0_16E4307DCC419505_600*(*)(::PVOID, ::Class_1_7BB1FDFF031F38EB*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136_METHOD_1_1C494771E5DE0FDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E3089A2C97C0F3D6(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136_METHOD_1_E3089A2C97C0F3D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED86EC5BE26E3939(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136_METHOD_1_ED86EC5BE26E3939_OFFSET))(this, a1);
	}

	::System::Void Method_1_6120657EA7C99637(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136_METHOD_1_6120657EA7C99637_OFFSET))(this, a1);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_9F35D560C1A1DBEC(::System::EventArgs* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136_METHOD_1_9F35D560C1A1DBEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D2F5EC9A721C1561(::Class_1_6A3A26AD0CB7F995* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A3A26AD0CB7F995*))((::PBYTE)hIl2Cpp + CLASS_1_10E552FF2A1B8136_METHOD_1_D2F5EC9A721C1561_OFFSET))(this, a1);
	}
};
