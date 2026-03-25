#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9C466B0994F2417.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_2_7B875DB8377B17FA_METHOD_2_0092CAFB10849095_OFFSET UNITYSDK_OFFSET(0x11536400)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_12BB80FE5A245864_OFFSET UNITYSDK_OFFSET(0x115362F0)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_13B6D9C01E9D4015_OFFSET UNITYSDK_OFFSET(0x11535E10)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_199BF35536FEB9B2_OFFSET UNITYSDK_OFFSET(0x11535D80)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_1EBE673CC8F565B9_OFFSET UNITYSDK_OFFSET(0x11535CD0)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_6D13FC1EF2E900A2_OFFSET UNITYSDK_OFFSET(0x11536250)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_714FDEA934BD3D11_OFFSET UNITYSDK_OFFSET(0x11536360)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_95AF6F1C95FF6715_OFFSET UNITYSDK_OFFSET(0x11536040)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_A4607395C3912858_OFFSET UNITYSDK_OFFSET(0x115360B0)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_B3BB53A261E7649D_OFFSET UNITYSDK_OFFSET(0x115361E0)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_D2B262DB75D95851_1_OFFSET UNITYSDK_OFFSET(0x11535C20)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_D2B262DB75D95851_OFFSET UNITYSDK_OFFSET(0x11535B70)
#define CLASS_2_7B875DB8377B17FA_METHOD_2_F91453AE617CCFE9_OFFSET UNITYSDK_OFFSET(0x11536150)
#define CLASS_2_7B875DB8377B17FA__CTOR_OFFSET UNITYSDK_OFFSET(0x11535AA0)

inline static constexpr unsigned int Class_2_7B875DB8377B17FA_TypeDefinitionIndex = 50464;

class Class_2_7B875DB8377B17FA : public ::Class_1_A9C466B0994F2417
{
public:
	::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D2B262DB75D95851(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_D2B262DB75D95851_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D2B262DB75D95851_1(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_D2B262DB75D95851_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1EBE673CC8F565B9(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_1EBE673CC8F565B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_199BF35536FEB9B2(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_199BF35536FEB9B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_13B6D9C01E9D4015(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_13B6D9C01E9D4015_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_95AF6F1C95FF6715(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_95AF6F1C95FF6715_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F91453AE617CCFE9(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_F91453AE617CCFE9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B3BB53A261E7649D(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_B3BB53A261E7649D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12BB80FE5A245864(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_12BB80FE5A245864_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0092CAFB10849095(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_0092CAFB10849095_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4607395C3912858(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_A4607395C3912858_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D13FC1EF2E900A2(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_6D13FC1EF2E900A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_714FDEA934BD3D11(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_7B875DB8377B17FA_METHOD_2_714FDEA934BD3D11_OFFSET))(this, a1);
	}
};
