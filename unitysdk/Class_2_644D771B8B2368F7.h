#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E6C4BA4C142021B7.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_644D771B8B2368F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C77C10)
#define CLASS_2_644D771B8B2368F7_METHOD_2_1AC2F488F53A3253_OFFSET UNITYSDK_OFFSET(0x17C768D0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17C77A90)
#define CLASS_2_644D771B8B2368F7_METHOD_2_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0x17C77480)
#define CLASS_2_644D771B8B2368F7_METHOD_2_378AD9E7C929AB6F_OFFSET UNITYSDK_OFFSET(0x17C77990)
#define CLASS_2_644D771B8B2368F7_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17C77580)
#define CLASS_2_644D771B8B2368F7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17C77890)
#define CLASS_2_644D771B8B2368F7_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x17C76690)
#define CLASS_2_644D771B8B2368F7_METHOD_2_48A730878298E8F8_OFFSET UNITYSDK_OFFSET(0x17C76E50)
#define CLASS_2_644D771B8B2368F7_METHOD_2_60BDBD02AE36FD20_OFFSET UNITYSDK_OFFSET(0x17C77AF0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x17C76FF0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_7F7379F8817AA054_OFFSET UNITYSDK_OFFSET(0x17C761A0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x17C75F30)
#define CLASS_2_644D771B8B2368F7_METHOD_2_96FFD6FC64D41C33_OFFSET UNITYSDK_OFFSET(0x17C77B70)
#define CLASS_2_644D771B8B2368F7_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x17C76C40)
#define CLASS_2_644D771B8B2368F7_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x17C760A0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x17C75FE0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x17C76A00)
#define CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17C778F0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x17C77940)
#define CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17C76BF0)
#define CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_1_OFFSET UNITYSDK_OFFSET(0x17C77800)
#define CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_OFFSET UNITYSDK_OFFSET(0x17C77760)
#define CLASS_2_644D771B8B2368F7__CTOR_OFFSET UNITYSDK_OFFSET(0x17C75EA0)

inline static constexpr unsigned int Class_2_644D771B8B2368F7_TypeDefinitionIndex = 50025;

class Class_2_644D771B8B2368F7 : public ::Class_1_E6C4BA4C142021B7
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x80
	::System::Single Field_2_2; // 0x88
	::System::Single Field_2_3; // 0x8C
	::System::Boolean Field_2_4; // 0x90
	::System::Boolean Field_2_5; // 0x91
	::System::Single Field_2_6; // 0x94
	::System::Single Field_2_7; // 0x98
	::System::Single Field_2_8; // 0x9C
	::System::Single Field_2_9; // 0xA0
	::System::Single Field_2_10; // 0xA4
	::System::Single Field_2_11; // 0xA8
	::System::Single Field_2_12; // 0xAC
	::RPG::GameCore::AdvNavigationMotionFlagMode Field_2_13; // 0xB0
	::System::Single Field_2_14; // 0xB4
	::System::Single Field_2_15; // 0xB8
	::System::Single Field_2_16; // 0xBC
	::System::Single Field_2_17; // 0xC0
	::System::Single Field_2_18; // 0xC4
	::System::Single Field_2_19; // 0xC8
	::System::Single Field_2_20; // 0xCC
	::System::Single Field_2_21; // 0xD0
	::System::Single Field_2_22; // 0xD4
	::System::Single Field_2_23; // 0xD8
	::System::Single Field_2_24; // 0xDC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_2_7F7379F8817AA054(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_7F7379F8817AA054_OFFSET))(this, a1);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1AC2F488F53A3253(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_1AC2F488F53A3253_OFFSET))(this, a1);
	}

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_D8EB89DF128EDA39(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8EB89DF128EDA39_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_D8EB89DF128EDA39_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_48A730878298E8F8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_48A730878298E8F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void Method_2_378AD9E7C929AB6F(::System::Single a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_378AD9E7C929AB6F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3021F634E77C58A0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_3021F634E77C58A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_60BDBD02AE36FD20(::RPG::GameCore::AdvNavigationMotionFlagMode a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationMotionFlagMode, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_60BDBD02AE36FD20_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_96FFD6FC64D41C33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_METHOD_2_96FFD6FC64D41C33_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_644D771B8B2368F7_DISPOSE_OFFSET))(this);
	}
};
