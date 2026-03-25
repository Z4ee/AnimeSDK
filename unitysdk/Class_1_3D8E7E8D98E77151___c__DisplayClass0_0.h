#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMissionIcon; }
namespace RPG::Client::NavMap { class MappingInfoNode; }

#define CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__0_OFFSET UNITYSDK_OFFSET(0x89426B0)
#define CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__1_OFFSET UNITYSDK_OFFSET(0x8942770)
#define CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__2_OFFSET UNITYSDK_OFFSET(0x8942790)
#define CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__3_OFFSET UNITYSDK_OFFSET(0x89427B0)
#define CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__4_OFFSET UNITYSDK_OFFSET(0x89427D0)
#define CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__5_OFFSET UNITYSDK_OFFSET(0x89427F0)
#define CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x89417F0)

inline static constexpr unsigned int Class_1_3D8E7E8D98E77151___c__DisplayClass0_0_TypeDefinitionIndex = 53801;

class Class_1_3D8E7E8D98E77151___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::UInt32 explicit_tp_id; // 0x10
	::System::UInt32 submissionID; // 0x14
	::System::UInt32 overrideTeleportMappingInfoID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CheckUseLegacyMethod_b__0(::RPG::Client::IMissionIcon* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMissionIcon*))((::PBYTE)hIl2Cpp + CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__0_OFFSET))(this, data);
	}

	::System::Boolean _CheckUseLegacyMethod_b__1(::RPG::Client::NavMap::MappingInfoNode* node)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__1_OFFSET))(this, node);
	}

	::System::Boolean _CheckUseLegacyMethod_b__2(::RPG::Client::NavMap::MappingInfoNode* node)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__2_OFFSET))(this, node);
	}

	::System::Boolean _CheckUseLegacyMethod_b__3(::RPG::Client::NavMap::MappingInfoNode* node)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__3_OFFSET))(this, node);
	}

	::System::Boolean _CheckUseLegacyMethod_b__4(::RPG::Client::NavMap::MappingInfoNode* node)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__4_OFFSET))(this, node);
	}

	::System::Boolean _CheckUseLegacyMethod_b__5(::RPG::Client::NavMap::MappingInfoNode* node)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + CLASS_1_3D8E7E8D98E77151___C__DISPLAYCLASS0_0__CHECKUSELEGACYMETHOD_B__5_OFFSET))(this, node);
	}
};
