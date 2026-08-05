#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_36;
class Class_1_77D255857CC40452;
class Class_1_D4EE696AE596E211;
namespace MoleMole::Config { class AtmosphereData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_1_25529FEC04B66050_METHOD_1_02AA951262F17589_OFFSET UNITYSDK_OFFSET(0x12CF75C0)
#define CLASS_1_25529FEC04B66050_METHOD_1_07C7006E5EFBF9C8_OFFSET UNITYSDK_OFFSET(0x12CF6DE0)
#define CLASS_1_25529FEC04B66050_METHOD_1_10C207AE0B24C5CE_OFFSET UNITYSDK_OFFSET(0x12CF74A0)
#define CLASS_1_25529FEC04B66050_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12CF75D0)
#define CLASS_1_25529FEC04B66050_METHOD_1_2ED7FC42A67523F2_OFFSET UNITYSDK_OFFSET(0x12CF76A0)
#define CLASS_1_25529FEC04B66050_METHOD_1_594ACB3D93BCCD52_OFFSET UNITYSDK_OFFSET(0x12CF76B0)
#define CLASS_1_25529FEC04B66050_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12CF6F60)
#define CLASS_1_25529FEC04B66050_METHOD_1_C80772519890C6C0_OFFSET UNITYSDK_OFFSET(0x12CF6FD0)
#define CLASS_1_25529FEC04B66050_METHOD_1_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x12CF78D0)
#define CLASS_1_25529FEC04B66050_METHOD_1_F79F15579AE4AF4D_OFFSET UNITYSDK_OFFSET(0x12CF7940)
#define CLASS_1_25529FEC04B66050__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF6D00)

inline static constexpr unsigned int Class_1_25529FEC04B66050_TypeDefinitionIndex = 41274;

class Class_1_25529FEC04B66050 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>* Field_1_2; // 0x10
	::UnityEngine::Rendering::Volume* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_36*>* Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_07C7006E5EFBF9C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_07C7006E5EFBF9C8_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_C80772519890C6C0(::MoleMole::Config::AtmosphereData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AtmosphereData*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_C80772519890C6C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_10C207AE0B24C5CE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_10C207AE0B24C5CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_02AA951262F17589(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_02AA951262F17589_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::UnityEngine::Rendering::Volume* Method_1_2ED7FC42A67523F2()
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_2ED7FC42A67523F2_OFFSET))(this);
	}

	::System::Void Method_1_594ACB3D93BCCD52(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_594ACB3D93BCCD52_OFFSET))(this, a1);
	}

	::System::Void Method_1_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F79F15579AE4AF4D(::Class_1_77D255857CC40452* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_77D255857CC40452*))((::PBYTE)hIl2Cpp + CLASS_1_25529FEC04B66050_METHOD_1_F79F15579AE4AF4D_OFFSET))(this, a1);
	}
};
