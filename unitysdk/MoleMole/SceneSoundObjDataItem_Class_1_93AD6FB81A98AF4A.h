#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/System/Object.h"

class Class_1_D840400A176259F3;
namespace MoleMole { class SceneSoundObjDataItem; }

#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x1809D800)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x1809D010)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_INIT_OFFSET UNITYSDK_OFFSET(0x1809DC70)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_METHOD_1_956051F9F414D412_OFFSET UNITYSDK_OFFSET(0x1809EB30)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_ONSYNC_OFFSET UNITYSDK_OFFSET(0x1809E910)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_POLISH_OFFSET UNITYSDK_OFFSET(0x1809E990)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1809EA10)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A__CTOR_OFFSET UNITYSDK_OFFSET(0x1809EB20)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundObjDataItem_Class_1_93AD6FB81A98AF4A_TypeDefinitionIndex = 76216;

	class SceneSoundObjDataItem_Class_1_93AD6FB81A98AF4A : public ::System::Object
	{
	public:
		::MoleMole::SceneSoundObjDataItem* Field_1_3; // 0x10
		::Dest::Math::Box3 Field_1_7; // 0x18
		::Dest::Math::Sphere3 Field_1_0; // 0x54
		::System::UInt32 Field_1_2; // 0x64
		::System::Boolean Field_1_5; // 0x68
		::Dest::Math::Box3 Field_1_1; // 0x6C
		::Dest::Math::Sphere3 Field_1_6; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A__CTOR_OFFSET))(this);
		}

		::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_COMPUTESYNC_OFFSET))(this, a1, a2);
		}

		::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_APPLYSYNCTOWWISE_OFFSET))(this, a1);
		}

		::System::Void Init(::Class_1_D840400A176259F3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_INIT_OFFSET))(this, a1);
		}

		::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_ONSYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Polish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_POLISH_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_RECYCLE_OFFSET))(this);
		}

		static ::MoleMole::SceneSoundObjDataItem_Class_1_93AD6FB81A98AF4A* Method_1_956051F9F414D412(::MoleMole::SceneSoundObjDataItem* a1)
		{
			return ((::MoleMole::SceneSoundObjDataItem_Class_1_93AD6FB81A98AF4A*(*)(::MoleMole::SceneSoundObjDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_93AD6FB81A98AF4A_METHOD_1_956051F9F414D412_OFFSET))(a1);
		}
	};
}
