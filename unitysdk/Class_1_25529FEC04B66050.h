#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_37;
class Class_1_77D255857CC40452;
class Class_1_D4EE696AE596E211;
namespace MoleMole::Config { class AtmosphereData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_1_25529FEC04B66050_METHOD_1_02AA951262F17589_OFFSET UNITYSDK_OFFSET(0x118A3940)
#define CLASS_1_25529FEC04B66050_METHOD_1_10C207AE0B24C5CE_OFFSET UNITYSDK_OFFSET(0x118A3820)
#define CLASS_1_25529FEC04B66050_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x118A3140)
#define CLASS_1_25529FEC04B66050_METHOD_1_2ED7FC42A67523F2_OFFSET UNITYSDK_OFFSET(0x118A3810)
#define CLASS_1_25529FEC04B66050_METHOD_1_594ACB3D93BCCD52_OFFSET UNITYSDK_OFFSET(0x118A2F30)
#define CLASS_1_25529FEC04B66050_METHOD_1_65EB0EA63F59446D_OFFSET UNITYSDK_OFFSET(0x118A2DC0)
#define CLASS_1_25529FEC04B66050_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x118A36E0)
#define CLASS_1_25529FEC04B66050_METHOD_1_C80772519890C6C0_OFFSET UNITYSDK_OFFSET(0x118A3210)
#define CLASS_1_25529FEC04B66050_METHOD_1_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x118A2D50)
#define CLASS_1_25529FEC04B66050_METHOD_1_F79F15579AE4AF4D_OFFSET UNITYSDK_OFFSET(0x118A3750)
#define CLASS_1_25529FEC04B66050__CTOR_OFFSET UNITYSDK_OFFSET(0x118A2C70)

inline static constexpr unsigned int Class_1_25529FEC04B66050_TypeDefinitionIndex = 57243;

class Class_1_25529FEC04B66050 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_3; // 0x0
	::UnityEngine::Rendering::Volume* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_37*>* Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_1_C80772519890C6C0(::MoleMole::Config::AtmosphereData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AtmosphereData*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_C80772519890C6C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Int32 Method_1_F79F15579AE4AF4D(::Class_1_77D255857CC40452* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_77D255857CC40452*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_F79F15579AE4AF4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_65EB0EA63F59446D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_65EB0EA63F59446D_OFFSET))(this);
	}

	::UnityEngine::Rendering::Volume* Method_1_2ED7FC42A67523F2()
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_2ED7FC42A67523F2_OFFSET))(this);
	}

	::System::Void Method_1_10C207AE0B24C5CE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_10C207AE0B24C5CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_594ACB3D93BCCD52(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_594ACB3D93BCCD52_OFFSET))(this, a1);
	}

	::System::Void Method_1_02AA951262F17589(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_02AA951262F17589_OFFSET))(this, a1);
	}
};
