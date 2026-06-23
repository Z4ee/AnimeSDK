#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/System/Object.h"

class Class_1_D840400A176259F3;
namespace MoleMole { class SceneSoundObjDataItem; }

#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x1870DDF0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x1870D5C0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_INIT_OFFSET UNITYSDK_OFFSET(0x1870E260)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_METHOD_1_956051F9F414D412_OFFSET UNITYSDK_OFFSET(0x1870F0E0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_ONSYNC_OFFSET UNITYSDK_OFFSET(0x1870EEC0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_POLISH_OFFSET UNITYSDK_OFFSET(0x1870EF40)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1870EFC0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655__CTOR_OFFSET UNITYSDK_OFFSET(0x1870F0D0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundObjDataItem_Class_1_A55F8AA802D24655_TypeDefinitionIndex = 72132;

	class SceneSoundObjDataItem_Class_1_A55F8AA802D24655 : public ::System::Object
	{
	public:
		::MoleMole::SceneSoundObjDataItem* Field_1_0; // 0x10
		::System::Boolean Field_1_6; // 0x18
		::Dest::Math::Box3 Field_1_4; // 0x1C
		::Dest::Math::Sphere3 Field_1_3; // 0x58
		::Dest::Math::Box3 Field_1_2; // 0x68
		::System::UInt32 Field_1_1; // 0xA4
		::Dest::Math::Sphere3 Field_1_5; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655__CTOR_OFFSET))(this);
		}

		::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_COMPUTESYNC_OFFSET))(this, a1, a2);
		}

		::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_APPLYSYNCTOWWISE_OFFSET))(this, a1);
		}

		::System::Void Init(::Class_1_D840400A176259F3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_INIT_OFFSET))(this, a1);
		}

		::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_ONSYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Polish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_POLISH_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_RECYCLE_OFFSET))(this);
		}

		static ::MoleMole::SceneSoundObjDataItem_Class_1_A55F8AA802D24655* Method_1_956051F9F414D412(::MoleMole::SceneSoundObjDataItem* a1)
		{
			return ((::MoleMole::SceneSoundObjDataItem_Class_1_A55F8AA802D24655*(*)(::MoleMole::SceneSoundObjDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_A55F8AA802D24655_METHOD_1_956051F9F414D412_OFFSET))(a1);
		}
	};
}
