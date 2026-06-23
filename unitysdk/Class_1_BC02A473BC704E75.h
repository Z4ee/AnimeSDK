#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/FloatOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace UnityEngine { class Material; }

#define CLASS_1_BC02A473BC704E75_METHOD_1_16864485CBF1BA92_OFFSET UNITYSDK_OFFSET(0x107825F0)
#define CLASS_1_BC02A473BC704E75_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x10782C90)
#define CLASS_1_BC02A473BC704E75_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x10782AE0)
#define CLASS_1_BC02A473BC704E75_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10782560)
#define CLASS_1_BC02A473BC704E75_METHOD_1_4AF4FA1AC5B5B485_OFFSET UNITYSDK_OFFSET(0x10782990)
#define CLASS_1_BC02A473BC704E75_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10782980)
#define CLASS_1_BC02A473BC704E75_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10782C20)
#define CLASS_1_BC02A473BC704E75_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x107824E0)
#define CLASS_1_BC02A473BC704E75_METHOD_1_DD85D6AC91C1BEA9_OFFSET UNITYSDK_OFFSET(0x10782D80)
#define CLASS_1_BC02A473BC704E75_METHOD_1_E8024D1B75A10789_1_OFFSET UNITYSDK_OFFSET(0x10782AB0)
#define CLASS_1_BC02A473BC704E75_METHOD_1_E8024D1B75A10789_OFFSET UNITYSDK_OFFSET(0x107828C0)
#define CLASS_1_BC02A473BC704E75_METHOD_1_E919D534F1B0432F_OFFSET UNITYSDK_OFFSET(0x10782680)
#define CLASS_1_BC02A473BC704E75_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x10782B30)
#define CLASS_1_BC02A473BC704E75_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x107828F0)
#define CLASS_1_BC02A473BC704E75_METHOD_1_F671A90183524AF2_OFFSET UNITYSDK_OFFSET(0x10782900)
#define CLASS_1_BC02A473BC704E75__CCTOR_OFFSET UNITYSDK_OFFSET(0x10782490)
#define CLASS_1_BC02A473BC704E75__CTOR_OFFSET UNITYSDK_OFFSET(0x10782450)

inline static constexpr unsigned int Class_1_BC02A473BC704E75_TypeDefinitionIndex = 83612;

class Class_1_BC02A473BC704E75 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC02A473BC704E75_TypeDefinitionIndex)->GetStaticField(0x11F50);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC02A473BC704E75_TypeDefinitionIndex)->GetStaticField(0x11F54);
	}
	::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* Field_1_5; // 0x10
	::UnityEngine::Material* Field_1_0; // 0x18
	::System::Single Field_1_8; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Boolean Field_1_9; // 0x30
	::System::Boolean Field_1_3; // 0x31

	::System::Void _ctor(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75__CCTOR_OFFSET))();
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_16864485CBF1BA92(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_16864485CBF1BA92_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_1_E8024D1B75A10789()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_E8024D1B75A10789_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_F671A90183524AF2(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_F671A90183524AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_1_4AF4FA1AC5B5B485()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_4AF4FA1AC5B5B485_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Color Method_1_E8024D1B75A10789_1()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_E8024D1B75A10789_1_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_DD85D6AC91C1BEA9(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_DD85D6AC91C1BEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E919D534F1B0432F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC02A473BC704E75_METHOD_1_E919D534F1B0432F_OFFSET))(this, a1);
	}
};
