#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4.h"
#include "unitysdk/Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5.h"
#include "unitysdk/Class_3_4E37DAA8FF1ADBDD_Struct_2_8FA3148BBF6A5F8F.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Enum_3_B1E3F4D4C32B440D.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_09C6D749A1B6BB3E;
class Class_3_757A5862D4BBEE41;
class Class_3_AF7A56E03A4D3952;
class Class_3_DFD5D1FDB9D2A4AC;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_4E37DAA8FF1ADBDD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x181BB8D0)
#define CLASS_3_4E37DAA8FF1ADBDD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x181BBC80)
#define CLASS_3_4E37DAA8FF1ADBDD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x181BBB20)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_0245CE3914B024F3_OFFSET UNITYSDK_OFFSET(0x181BF640)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_03048DC9BCA3A1B1_OFFSET UNITYSDK_OFFSET(0x181C7930)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_0671A658DD7403FF_OFFSET UNITYSDK_OFFSET(0x181C7EC0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_06A32D8FC244C7A0_OFFSET UNITYSDK_OFFSET(0x181BEE60)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_0967101E100517FC_OFFSET UNITYSDK_OFFSET(0x181C5F30)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_098BDC7D15678F1B_OFFSET UNITYSDK_OFFSET(0x181C8050)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_1BDCE7278D1CBE6C_OFFSET UNITYSDK_OFFSET(0x181BC040)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_1D45AE07B132A82D_OFFSET UNITYSDK_OFFSET(0x181BCD90)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_316E286670A75F9E_OFFSET UNITYSDK_OFFSET(0x181C6F40)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_39BB6DC3BE55CB5C_OFFSET UNITYSDK_OFFSET(0x181C0DD0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_3F48C25C61F8E6C1_OFFSET UNITYSDK_OFFSET(0x181C3C30)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_40183844FCF5D651_OFFSET UNITYSDK_OFFSET(0x181BD140)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_46B98E3BEE918F5B_OFFSET UNITYSDK_OFFSET(0xFE47600)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_4D732BAD9E6CED82_OFFSET UNITYSDK_OFFSET(0x181BC940)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_500BDD1E218E20AB_OFFSET UNITYSDK_OFFSET(0x181C4570)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_52510BD88B41746B_OFFSET UNITYSDK_OFFSET(0x181C0B70)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_527FF7FABB19D708_1_OFFSET UNITYSDK_OFFSET(0x181C4320)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_527FF7FABB19D708_OFFSET UNITYSDK_OFFSET(0x181BE670)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5288AE7839DAE123_OFFSET UNITYSDK_OFFSET(0xFE46AF0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5437621ECD9C95BA_OFFSET UNITYSDK_OFFSET(0xFE47350)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5ADA03CF52187465_OFFSET UNITYSDK_OFFSET(0xFE46350)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5EB8FB5EC9256F6E_OFFSET UNITYSDK_OFFSET(0x181C7E10)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5F355229EDB72353_OFFSET UNITYSDK_OFFSET(0x181C2620)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5FB562A39F3E6763_OFFSET UNITYSDK_OFFSET(0x181BF860)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_613B4D4B1B11DA9D_OFFSET UNITYSDK_OFFSET(0x181C5DE0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_63E4D7363C6B4DFD_OFFSET UNITYSDK_OFFSET(0xFE468F0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_679CCD569DE0178D_OFFSET UNITYSDK_OFFSET(0x181BDDB0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_6AFD4F472B6E21B5_OFFSET UNITYSDK_OFFSET(0x181BF570)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_6BEC0C5B2AF9F1D2_OFFSET UNITYSDK_OFFSET(0x181C46D0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_6F536CC421CAAC45_OFFSET UNITYSDK_OFFSET(0x181C22B0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_724D2338ACD3E8A3_1_OFFSET UNITYSDK_OFFSET(0x181C6B00)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_724D2338ACD3E8A3_2_OFFSET UNITYSDK_OFFSET(0x181C82A0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x181C3AF0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_73B0F8D29959C559_OFFSET UNITYSDK_OFFSET(0x181C56F0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_73FDEFF1E5C241FD_OFFSET UNITYSDK_OFFSET(0x181BFBA0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_780C3CDFCABAB0B0_OFFSET UNITYSDK_OFFSET(0x181BE8C0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_791FD55374F4DAB8_OFFSET UNITYSDK_OFFSET(0xFE46070)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_7C751ADAC66DDA47_OFFSET UNITYSDK_OFFSET(0x181C4C60)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_7DFE9E46521F3AF1_OFFSET UNITYSDK_OFFSET(0x181C66C0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_84C9097BF35F5A13_OFFSET UNITYSDK_OFFSET(0x181C3B70)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_84E4D65DFC681E1D_OFFSET UNITYSDK_OFFSET(0x181C72B0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_8653BF5E3E51C876_OFFSET UNITYSDK_OFFSET(0x181C50D0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_8697AF5AB7984C07_OFFSET UNITYSDK_OFFSET(0x181C1250)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_86E72231BD6EB376_OFFSET UNITYSDK_OFFSET(0x181BD8C0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_90889A6A6929E4BE_OFFSET UNITYSDK_OFFSET(0x181C2D50)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_9D346EBF814CBA7D_OFFSET UNITYSDK_OFFSET(0x181C0CE0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_A2CD2A2CB00FD598_OFFSET UNITYSDK_OFFSET(0x181C6B60)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_A2D280FF02726EC0_OFFSET UNITYSDK_OFFSET(0x181C3A10)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_A34FAD7A3FD7AD04_OFFSET UNITYSDK_OFFSET(0x181BDC60)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_ACB38D2084B08FEA_OFFSET UNITYSDK_OFFSET(0x181C6720)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_B15B75B7A3010313_OFFSET UNITYSDK_OFFSET(0x181C1E10)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_B35B40629F027B34_OFFSET UNITYSDK_OFFSET(0x181C48B0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_B5E9751160699DC2_OFFSET UNITYSDK_OFFSET(0xFE46D10)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x181C6A70)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_BD1686CD46D15480_OFFSET UNITYSDK_OFFSET(0x181C17B0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_C69F046CD929E034_OFFSET UNITYSDK_OFFSET(0xFE47200)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x181C7810)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x181C78A0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x181BBFB0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA4F1F20069C4F17_OFFSET UNITYSDK_OFFSET(0x181C5480)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CAECAD009B52B514_1_OFFSET UNITYSDK_OFFSET(0x181C4260)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CAECAD009B52B514_OFFSET UNITYSDK_OFFSET(0x181C16F0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_D0EC10BACB5DC7D3_OFFSET UNITYSDK_OFFSET(0x181BD0B0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_DB56211CE76A17A2_OFFSET UNITYSDK_OFFSET(0x181C6270)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_DC407F13C8F8D585_OFFSET UNITYSDK_OFFSET(0x181C64D0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E04CA61664E84865_OFFSET UNITYSDK_OFFSET(0x181BC270)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E33F53EB083F6486_OFFSET UNITYSDK_OFFSET(0x181BFAC0)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E45785348CC14D7F_OFFSET UNITYSDK_OFFSET(0x181BC140)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E8F40979B3DD5EA5_1_OFFSET UNITYSDK_OFFSET(0x181BD620)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E8F40979B3DD5EA5_OFFSET UNITYSDK_OFFSET(0x181C1450)
#define CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_F97BA222C6BA7F7D_OFFSET UNITYSDK_OFFSET(0x181C55A0)
#define CLASS_3_4E37DAA8FF1ADBDD_UPDATE_OFFSET UNITYSDK_OFFSET(0x181BBDE0)
#define CLASS_3_4E37DAA8FF1ADBDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x181BBF90)
#define CLASS_3_4E37DAA8FF1ADBDD__CTOR_OFFSET UNITYSDK_OFFSET(0x181BBF40)

inline static constexpr unsigned int Class_3_4E37DAA8FF1ADBDD_TypeDefinitionIndex = 73595;

class Class_3_4E37DAA8FF1ADBDD : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_4E37DAA8FF1ADBDD_TypeDefinitionIndex)->GetStaticField(0xBE80);
	}
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_4E37DAA8FF1ADBDD_TypeDefinitionIndex)->GetStaticField(0xBE84);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_3_1BDCE7278D1CBE6C(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3, ::FluffyUnderware::Curvy::CurvySplineSegment* a4)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_1BDCE7278D1CBE6C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E04CA61664E84865(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E04CA61664E84865_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_40183844FCF5D651(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2, ::System::Boolean a3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_40183844FCF5D651_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_527FF7FABB19D708(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_527FF7FABB19D708_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_A34FAD7A3FD7AD04(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_A34FAD7A3FD7AD04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_06A32D8FC244C7A0(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4& a1)
	{
		return ((::System::Void(*)(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_06A32D8FC244C7A0_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_0245CE3914B024F3(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4& a1)
	{
		return ((::System::Boolean(*)(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_0245CE3914B024F3_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_5FB562A39F3E6763(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5FB562A39F3E6763_OFFSET))(a1);
	}

	static ::System::Void Method_3_E33F53EB083F6486(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E33F53EB083F6486_OFFSET))(a1);
	}

	static ::System::Single Method_3_52510BD88B41746B(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_52510BD88B41746B_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_3_9D346EBF814CBA7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5& a3)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_9D346EBF814CBA7D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_39BB6DC3BE55CB5C(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_B1E3F4D4C32B440D a2, ::MoleMole::Battle::CurveMove_CurvySplineIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_B1E3F4D4C32B440D, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_39BB6DC3BE55CB5C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8697AF5AB7984C07(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_8697AF5AB7984C07_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_E45785348CC14D7F(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E45785348CC14D7F_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_CAECAD009B52B514(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CAECAD009B52B514_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B15B75B7A3010313(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_B15B75B7A3010313_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_84C9097BF35F5A13(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_84C9097BF35F5A13_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_CAECAD009B52B514_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CAECAD009B52B514_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73FDEFF1E5C241FD(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4& a1)
	{
		return ((::System::Void(*)(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_73FDEFF1E5C241FD_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_527FF7FABB19D708_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_527FF7FABB19D708_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7C751ADAC66DDA47(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment*& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_7C751ADAC66DDA47_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5F355229EDB72353(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5F355229EDB72353_OFFSET))(a1);
	}

	::System::Void Method_3_0967101E100517FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_0967101E100517FC_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_780C3CDFCABAB0B0(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_780C3CDFCABAB0B0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_DC407F13C8F8D585(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_DC407F13C8F8D585_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8653BF5E3E51C876(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_8653BF5E3E51C876_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_613B4D4B1B11DA9D(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_B1E3F4D4C32B440D a2, ::MoleMole::Battle::CurveMove_GamePlayIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_B1E3F4D4C32B440D, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_613B4D4B1B11DA9D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7DFE9E46521F3AF1(::Class_3_AF7A56E03A4D3952* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_7DFE9E46521F3AF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A2D280FF02726EC0(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_A2D280FF02726EC0_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection Method_3_ACB38D2084B08FEA(::Class_3_4E37DAA8FF1ADBDD_Struct_2_8FA3148BBF6A5F8F& a1)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection(*)(::Class_3_4E37DAA8FF1ADBDD_Struct_2_8FA3148BBF6A5F8F&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_ACB38D2084B08FEA_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_1(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_724D2338ACD3E8A3_1_OFFSET))(a1);
	}

	::System::Void Method_3_A2CD2A2CB00FD598(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_A2CD2A2CB00FD598_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_73B0F8D29959C559(::Class_3_757A5862D4BBEE41* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5& a4)
	{
		return ((::System::Void(*)(::Class_3_757A5862D4BBEE41*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_73B0F8D29959C559_OFFSET))(a1, a2, a3, a4);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_B35B40629F027B34(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_B35B40629F027B34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_316E286670A75F9E(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_AF7A56E03A4D3952* a2, ::Class_3_09C6D749A1B6BB3E* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_AF7A56E03A4D3952*, ::Class_3_09C6D749A1B6BB3E*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_316E286670A75F9E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_500BDD1E218E20AB(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4& a1)
	{
		return ((::System::Void(*)(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_500BDD1E218E20AB_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_84E4D65DFC681E1D(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_84E4D65DFC681E1D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_DB56211CE76A17A2(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_DB56211CE76A17A2_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveType Method_3_CA4F1F20069C4F17(::MoleMole::Battle::CurveMoveComponent_Config_MoveType a1, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5& a2)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveType(*)(::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_CA4F1F20069C4F17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_03048DC9BCA3A1B1(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_03048DC9BCA3A1B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1D45AE07B132A82D(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_1D45AE07B132A82D_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::OrientationAxisEnum Method_3_D0EC10BACB5DC7D3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::FluffyUnderware::Curvy::OrientationAxisEnum(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_D0EC10BACB5DC7D3_OFFSET))(a1);
	}

	static ::System::Void Method_3_679CCD569DE0178D(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_679CCD569DE0178D_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_6AFD4F472B6E21B5(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_6AFD4F472B6E21B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E8F40979B3DD5EA5(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E8F40979B3DD5EA5_OFFSET))(a1);
	}

	static ::System::Void Method_3_90889A6A6929E4BE(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_90889A6A6929E4BE_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_6BEC0C5B2AF9F1D2(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_6BEC0C5B2AF9F1D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_86E72231BD6EB376(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_86E72231BD6EB376_OFFSET))(a1);
	}

	static ::System::Void Method_3_3F48C25C61F8E6C1(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_3F48C25C61F8E6C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F97BA222C6BA7F7D(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5& a1)
	{
		return ((::System::Void(*)(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_F97BA222C6BA7F7D_OFFSET))(a1);
	}

	static ::System::Void Method_3_6F536CC421CAAC45(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_6F536CC421CAAC45_OFFSET))(a1);
	}

	static ::System::Void Method_3_E8F40979B3DD5EA5_1(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_E8F40979B3DD5EA5_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_0671A658DD7403FF(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_0671A658DD7403FF_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_098BDC7D15678F1B(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_098BDC7D15678F1B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_BD1686CD46D15480(::FluffyUnderware::Curvy::CurvySplineSegment* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_BD1686CD46D15480_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_5EB8FB5EC9256F6E(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5EB8FB5EC9256F6E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4D732BAD9E6CED82(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_4D732BAD9E6CED82_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_2(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_724D2338ACD3E8A3_2_OFFSET))(a1);
	}

	static ::System::Void Method_3_791FD55374F4DAB8(::UnityEngine::Quaternion a1, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType a2, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_791FD55374F4DAB8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5ADA03CF52187465(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5ADA03CF52187465_OFFSET))(a1);
	}

	static ::System::Void Method_3_63E4D7363C6B4DFD(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_63E4D7363C6B4DFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5288AE7839DAE123(::UnityEngine::Vector3 a1, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a2, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_5&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5288AE7839DAE123_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_B5E9751160699DC2(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_B5E9751160699DC2_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_C69F046CD929E034(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::String*(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_C69F046CD929E034_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_5437621ECD9C95BA(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4& a1)
	{
		return ((::System::Boolean(*)(::Class_3_4E37DAA8FF1ADBDD_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_5437621ECD9C95BA_OFFSET))(a1);
	}

	static ::System::Single Method_3_46B98E3BEE918F5B(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_4E37DAA8FF1ADBDD_METHOD_3_46B98E3BEE918F5B_OFFSET))(a1, a2, a3);
	}
};
