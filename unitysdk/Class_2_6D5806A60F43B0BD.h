#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_8.h"

class Class_1_4D552DECB7AE0271;
class Class_1_51278AA2276AE188;
class Class_1_D70A30D666F20D90;
class Class_1_D8BCA6FA1DEB13B9;
class Class_2_8A62A96D5B2D08F0;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class HoyoTag; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6D5806A60F43B0BD_GET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0xBE83ED0)
#define CLASS_2_6D5806A60F43B0BD_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBE830F0)
#define CLASS_2_6D5806A60F43B0BD_METHOD_2_C95B03C5A040E982_OFFSET UNITYSDK_OFFSET(0xBE83D50)
#define CLASS_2_6D5806A60F43B0BD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBE833E0)
#define CLASS_2_6D5806A60F43B0BD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE833A0)
#define CLASS_2_6D5806A60F43B0BD_METHOD_2_EB745313624B1835_OFFSET UNITYSDK_OFFSET(0xBE83420)
#define CLASS_2_6D5806A60F43B0BD_METHOD_2_F745438E63ACAE7D_OFFSET UNITYSDK_OFFSET(0xBE83270)
#define CLASS_2_6D5806A60F43B0BD_SET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0xBE83EE0)
#define CLASS_2_6D5806A60F43B0BD__CTOR_OFFSET UNITYSDK_OFFSET(0xBE82F00)

inline static constexpr unsigned int Class_2_6D5806A60F43B0BD_TypeDefinitionIndex = 73738;

class Class_2_6D5806A60F43B0BD : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_51278AA2276AE188*>* IJBCEOGJOPM; // 0x18
	::System::Collections::Generic::List_1<::Class_2_8A62A96D5B2D08F0*>* OOMEOLCMMOH; // 0x20
	::System::Boolean _RefreshMDV_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_F745438E63ACAE7D(::Class_1_D8BCA6FA1DEB13B9* a1, ::Class_1_D8BCA6FA1DEB13B9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*, ::Class_1_D8BCA6FA1DEB13B9*))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_METHOD_2_F745438E63ACAE7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_EB745313624B1835(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Struct_2_CC45B4503679E14E_8 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Struct_2_CC45B4503679E14E_8))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_METHOD_2_EB745313624B1835_OFFSET))(this, a1, a2);
	}

	::Class_1_4D552DECB7AE0271* Method_2_C95B03C5A040E982(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::HoyoTag* a2)
	{
		return ((::Class_1_4D552DECB7AE0271*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_METHOD_2_C95B03C5A040E982_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_RefreshMDV()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_GET_REFRESHMDV_OFFSET))(this);
	}

	::System::Void set_RefreshMDV(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D5806A60F43B0BD_SET_REFRESHMDV_OFFSET))(this, a1);
	}
};
