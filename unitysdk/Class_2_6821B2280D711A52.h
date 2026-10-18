#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/NativeString.h"

class Class_2_A48F3719AA1CF200_35;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6821B2280D711A52_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3E96F0)
#define CLASS_2_6821B2280D711A52_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB3E9810)
#define CLASS_2_6821B2280D711A52_METHOD_2_090BCD9BFCD6DFF8_OFFSET UNITYSDK_OFFSET(0xB3E7820)
#define CLASS_2_6821B2280D711A52_METHOD_2_16323FC6A31C6693_OFFSET UNITYSDK_OFFSET(0xB3E1060)
#define CLASS_2_6821B2280D711A52_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xB3E8DC0)
#define CLASS_2_6821B2280D711A52_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB3E8AD0)
#define CLASS_2_6821B2280D711A52_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB3E7630)
#define CLASS_2_6821B2280D711A52_METHOD_2_1EFC5A8A94CA6BE7_OFFSET UNITYSDK_OFFSET(0xB3E7300)
#define CLASS_2_6821B2280D711A52_METHOD_2_21C77EE697523F65_OFFSET UNITYSDK_OFFSET(0xB3E6500)
#define CLASS_2_6821B2280D711A52_METHOD_2_28E79F620B30B422_OFFSET UNITYSDK_OFFSET(0xB3E8C30)
#define CLASS_2_6821B2280D711A52_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB3E5B50)
#define CLASS_2_6821B2280D711A52_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB3E8D70)
#define CLASS_2_6821B2280D711A52_METHOD_2_3E2ADB487A34BD2D_OFFSET UNITYSDK_OFFSET(0xB3E5E90)
#define CLASS_2_6821B2280D711A52_METHOD_2_4ECA7EC0FAA68570_OFFSET UNITYSDK_OFFSET(0xB3E8F90)
#define CLASS_2_6821B2280D711A52_METHOD_2_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0xB3E7690)
#define CLASS_2_6821B2280D711A52_METHOD_2_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0xB3E8CD0)
#define CLASS_2_6821B2280D711A52_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0xB3E7420)
#define CLASS_2_6821B2280D711A52_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xB3E57E0)
#define CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0xB3E6140)
#define CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xB3E60F0)
#define CLASS_2_6821B2280D711A52_METHOD_2_809818D33F5A75DB_OFFSET UNITYSDK_OFFSET(0xB3E3FD0)
#define CLASS_2_6821B2280D711A52_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0xB3E8340)
#define CLASS_2_6821B2280D711A52_METHOD_2_9056A82E3B7BB01B_OFFSET UNITYSDK_OFFSET(0xB3E6320)
#define CLASS_2_6821B2280D711A52_METHOD_2_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0xB3E8120)
#define CLASS_2_6821B2280D711A52_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xB3E0590)
#define CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xB3E9640)
#define CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xB3E9590)
#define CLASS_2_6821B2280D711A52_METHOD_2_C6F738ECB1BBB902_OFFSET UNITYSDK_OFFSET(0xB3E8690)
#define CLASS_2_6821B2280D711A52_METHOD_2_C825CC6156D8612D_OFFSET UNITYSDK_OFFSET(0xB3E4190)
#define CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB3E64C0)
#define CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB3E75F0)
#define CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3E6190)
#define CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_1_OFFSET UNITYSDK_OFFSET(0xB3E7D70)
#define CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0xB3E5EE0)
#define CLASS_2_6821B2280D711A52_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xB3E6A10)
#define CLASS_2_6821B2280D711A52_METHOD_2_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0xB3E4B20)
#define CLASS_2_6821B2280D711A52_METHOD_2_F20A56AFD565E234_OFFSET UNITYSDK_OFFSET(0xB3E51C0)
#define CLASS_2_6821B2280D711A52_METHOD_2_F4702DCB1E895B7F_OFFSET UNITYSDK_OFFSET(0xB3E61D0)
#define CLASS_2_6821B2280D711A52_METHOD_2_F713E417997556FC_OFFSET UNITYSDK_OFFSET(0xB3E6B80)
#define CLASS_2_6821B2280D711A52_METHOD_2_FB31A773A52994BE_OFFSET UNITYSDK_OFFSET(0xB3E6BD0)
#define CLASS_2_6821B2280D711A52__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB3E0600)
#define CLASS_2_6821B2280D711A52__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3E9900)
#define CLASS_2_6821B2280D711A52__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E02D0)
#define CLASS_2_6821B2280D711A52__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB3E0450)
#define CLASS_2_6821B2280D711A52__ONTICK_OFFSET UNITYSDK_OFFSET(0xB3E17C0)
#define CLASS_2_6821B2280D711A52__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB3E0B10)

inline static constexpr unsigned int Class_2_6821B2280D711A52_TypeDefinitionIndex = 72735;

class Class_2_6821B2280D711A52 : public ::RPG::Client::UIController
{
public:
	static ::System::Boolean* StaticGet_FIMKFGKOHLO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x12140);
	}
	static ::System::Boolean* StaticGet_CJLGPFJDMPF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x12141);
	}
	static ::System::Boolean* StaticGet_DCIFMNEMKNN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x12142);
	}
	static ::System::Boolean* StaticGet_BMCHIKIGMLJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x12143);
	}
	static ::System::Single* StaticGet_PGKENOECKDM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x12144);
	}
	static ::System::Boolean* StaticGet_GJONPOJLEAM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x12148);
	}
	static ::System::Boolean* StaticGet_OMKFDFCDJGK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x12149);
	}
	static ::System::Boolean* StaticGet_AFFMMLPCGAC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6821B2280D711A52_TypeDefinitionIndex)->GetStaticField(0x1214A);
	}
	::System::Text::StringBuilder* FKPMBGHLPJJ; // 0x190
	::UnityEngine::Transform* DHDOBALIDKP; // 0x198
	::System::Text::StringBuilder* NNBPOKFMAMI; // 0x1A0
	::System::String* BDHLLKGIKOO; // 0x1A8
	::System::Single DDAIKJKPMOJ; // 0x1B0
	::System::Boolean ABFJGOICKEM; // 0x1B4
	::System::Int32 FDMEGKHMCCP; // 0x1B8
	::System::Int32 LFCPCLDDJAC; // 0x1BC
	::System::Int64 MGEFHMAMEPG; // 0x1C0
	::System::Int64 EJIIACGDAIH; // 0x1C8
	::System::Int64 KAEJPJEHGNL; // 0x1D0
	::System::Int64 KJDMEOLFAID; // 0x1D8
	::System::Single LMDGIEHNLKL; // 0x1E0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__CCTOR_OFFSET))();
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E2ADB487A34BD2D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_3E2ADB487A34BD2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F4702DCB1E895B7F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_F4702DCB1E895B7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9056A82E3B7BB01B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_9056A82E3B7BB01B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_21C77EE697523F65(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_21C77EE697523F65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_F713E417997556FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_F713E417997556FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_FB31A773A52994BE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_FB31A773A52994BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EFC5A8A94CA6BE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_1EFC5A8A94CA6BE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11BF4997198DC1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_E11BF4997198DC1F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_090BCD9BFCD6DFF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_090BCD9BFCD6DFF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_16323FC6A31C6693(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_16323FC6A31C6693_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD762BD492FAC131_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_CD762BD492FAC131_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F20A56AFD565E234(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_F20A56AFD565E234_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_809818D33F5A75DB(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_809818D33F5A75DB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_C825CC6156D8612D(::UnityEngine::UI::Text* a1, ::UnityEngine::NativeString a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::UnityEngine::NativeString, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C825CC6156D8612D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_C6F738ECB1BBB902(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C6F738ECB1BBB902_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Text* Method_2_28E79F620B30B422()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_28E79F620B30B422_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_6D5F59BCE8B4A09A_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4ECA7EC0FAA68570(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_4ECA7EC0FAA68570_OFFSET))(this, a1);
	}

	::Class_2_A48F3719AA1CF200_35* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_A48F3719AA1CF200_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6821B2280D711A52_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
