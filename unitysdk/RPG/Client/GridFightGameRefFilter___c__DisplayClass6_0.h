#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefFilter; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF8450)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__0_OFFSET UNITYSDK_OFFSET(0x1ABFAB70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__1_OFFSET UNITYSDK_OFFSET(0x1ABFAC50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__2_OFFSET UNITYSDK_OFFSET(0x1ABFADF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__3_OFFSET UNITYSDK_OFFSET(0x1ABFAE60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__8_OFFSET UNITYSDK_OFFSET(0x1ABFAD30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__9_OFFSET UNITYSDK_OFFSET(0x1ABFAD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter___c__DisplayClass6_0_TypeDefinitionIndex = 61839;

	class GridFightGameRefFilter___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRefFilter* __4__this; // 0x10
		::RPG::Client::GridFightGameRefData* data1; // 0x18
		::RPG::Client::GridFightGameRefData* data2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ReleativeSort_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __ReleativeSort_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__1_OFFSET))(this, a1);
		}

		::System::UInt32 __ReleativeSort_b__8(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__8_OFFSET))(this, a1);
		}

		::System::UInt32 __ReleativeSort_b__9(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__9_OFFSET))(this, a1);
		}

		::System::Boolean __ReleativeSort_b__2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __ReleativeSort_b__3(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__3_OFFSET))(this, a1);
		}
	};
}
