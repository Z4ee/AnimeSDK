#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/System/Object.h"

class Class_1_1747DAB17F36B4DF;
namespace MoleMole { class SceneSoundObjDataItem; }

#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_INIT_OFFSET UNITYSDK_OFFSET(0x1606AB70)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_METHOD_1_956051F9F414D412_OFFSET UNITYSDK_OFFSET(0x1606C070)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_ONSYNC_OFFSET UNITYSDK_OFFSET(0x1606B7D0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_POLISH_OFFSET UNITYSDK_OFFSET(0x1606BED0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1606BF50)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1606C060)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundObjDataItem_Class_1_66574E961446F8F2_TypeDefinitionIndex = 44688;

	class SceneSoundObjDataItem_Class_1_66574E961446F8F2 : public ::System::Object
	{
	public:
		::MoleMole::SceneSoundObjDataItem* Field_1_0; // 0x10
		::Dest::Math::Sphere3 Field_1_3; // 0x18
		::Dest::Math::Box3 Field_1_2; // 0x28
		::System::UInt32 Field_1_1; // 0x64
		::Dest::Math::Box3 Field_1_4; // 0x68
		::Dest::Math::Sphere3 Field_1_5; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_1747DAB17F36B4DF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_INIT_OFFSET))(this, a1);
		}

		::System::Void OnSync(::Class_1_1747DAB17F36B4DF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_ONSYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Polish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_POLISH_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_RECYCLE_OFFSET))(this);
		}

		static ::MoleMole::SceneSoundObjDataItem_Class_1_66574E961446F8F2* Method_1_956051F9F414D412(::MoleMole::SceneSoundObjDataItem* a1)
		{
			return ((::MoleMole::SceneSoundObjDataItem_Class_1_66574E961446F8F2*(*)(::MoleMole::SceneSoundObjDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_CLASS_1_66574E961446F8F2_METHOD_1_956051F9F414D412_OFFSET))(a1);
		}
	};
}
