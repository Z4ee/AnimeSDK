#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E30528F4CB67FD3D.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_2_6C506D1F07B86784_METHOD_2_12BB80FE5A245864_OFFSET UNITYSDK_OFFSET(0x16EFA800)
#define CLASS_2_6C506D1F07B86784_METHOD_2_199BF35536FEB9B2_OFFSET UNITYSDK_OFFSET(0x16EFA150)
#define CLASS_2_6C506D1F07B86784_METHOD_2_3044B4A1A066D2E1_OFFSET UNITYSDK_OFFSET(0x16EFA6F0)
#define CLASS_2_6C506D1F07B86784_METHOD_2_50CE27E7671562EF_1_OFFSET UNITYSDK_OFFSET(0x16EF9F10)
#define CLASS_2_6C506D1F07B86784_METHOD_2_50CE27E7671562EF_OFFSET UNITYSDK_OFFSET(0x16EF9DF0)
#define CLASS_2_6C506D1F07B86784_METHOD_2_5EEB90E173C3FD06_OFFSET UNITYSDK_OFFSET(0x16EFA1E0)
#define CLASS_2_6C506D1F07B86784_METHOD_2_68B9879D64645C47_OFFSET UNITYSDK_OFFSET(0x16EFA030)
#define CLASS_2_6C506D1F07B86784_METHOD_2_6EBCCBB76C8FC5CB_OFFSET UNITYSDK_OFFSET(0x16EFA4E0)
#define CLASS_2_6C506D1F07B86784_METHOD_2_95AF6F1C95FF6715_OFFSET UNITYSDK_OFFSET(0x16EFA470)
#define CLASS_2_6C506D1F07B86784_METHOD_2_9C0DA9C721F5F7F2_OFFSET UNITYSDK_OFFSET(0x16EFA870)
#define CLASS_2_6C506D1F07B86784_METHOD_2_B3BB53A261E7649D_OFFSET UNITYSDK_OFFSET(0x16EFA680)
#define CLASS_2_6C506D1F07B86784_METHOD_2_E5DBDE4EE86BF96D_OFFSET UNITYSDK_OFFSET(0x16EFA980)
#define CLASS_2_6C506D1F07B86784_METHOD_2_F91453AE617CCFE9_OFFSET UNITYSDK_OFFSET(0x16EFA5F0)
#define CLASS_2_6C506D1F07B86784__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF9DB0)

inline static constexpr unsigned int Class_2_6C506D1F07B86784_TypeDefinitionIndex = 59379;

class Class_2_6C506D1F07B86784 : public ::Class_1_E30528F4CB67FD3D
{
public:
	::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_50CE27E7671562EF(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_50CE27E7671562EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_50CE27E7671562EF_1(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_50CE27E7671562EF_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_68B9879D64645C47(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_68B9879D64645C47_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_199BF35536FEB9B2(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_199BF35536FEB9B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5EEB90E173C3FD06(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_5EEB90E173C3FD06_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_95AF6F1C95FF6715(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_95AF6F1C95FF6715_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F91453AE617CCFE9(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_F91453AE617CCFE9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B3BB53A261E7649D(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_B3BB53A261E7649D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12BB80FE5A245864(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_12BB80FE5A245864_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E5DBDE4EE86BF96D(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_E5DBDE4EE86BF96D_OFFSET))(this, a1);
	}

	::System::Void Method_2_6EBCCBB76C8FC5CB(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_6EBCCBB76C8FC5CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3044B4A1A066D2E1(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_3044B4A1A066D2E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C0DA9C721F5F7F2(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_6C506D1F07B86784_METHOD_2_9C0DA9C721F5F7F2_OFFSET))(this, a1);
	}
};
