#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7A1F9B1E855D33CF;
class Class_3_1A58F01F41846A1D;
class Class_3_883E597458B91E77;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_1_9F2658E9780F8D2E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BAA5B0)
#define CLASS_1_9F2658E9780F8D2E_METHOD_1_94AEC135B3D3BA4F_OFFSET UNITYSDK_OFFSET(0x12BAA610)
#define CLASS_1_9F2658E9780F8D2E_METHOD_1_D58D63DF1D1A9525_OFFSET UNITYSDK_OFFSET(0x12BAA930)
#define CLASS_1_9F2658E9780F8D2E_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x12BAB570)
#define CLASS_1_9F2658E9780F8D2E_METHOD_1_FA113CD55D99F4AF_OFFSET UNITYSDK_OFFSET(0x12BAB400)
#define CLASS_1_9F2658E9780F8D2E_METHOD_1_FF522372FB3A5515_OFFSET UNITYSDK_OFFSET(0x12BAAF00)
#define CLASS_1_9F2658E9780F8D2E__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAA580)

inline static constexpr unsigned int Class_1_9F2658E9780F8D2E_TypeDefinitionIndex = 43684;

class Class_1_9F2658E9780F8D2E : public ::System::Object
{
public:
	::Foundation::Variable_1<::UnityEngine::Quaternion> Field_1_0; // 0x10
	::System::Action* Field_1_8; // 0x38
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_6; // 0x40
	::Class_3_1A58F01F41846A1D* Field_1_7; // 0x48
	::Class_3_883E597458B91E77* Field_1_5; // 0x50
	::System::Boolean Field_1_4; // 0x58
	::System::Int32 Field_1_3; // 0x5C
	::UnityEngine::Vector2 Field_1_2; // 0x60
	::UnityEngine::Vector2 Field_1_1; // 0x68

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::Foundation::Variable_1<::UnityEngine::Quaternion> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::Foundation::Variable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_9F2658E9780F8D2E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2658E9780F8D2E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_94AEC135B3D3BA4F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_9F2658E9780F8D2E_METHOD_1_94AEC135B3D3BA4F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D58D63DF1D1A9525(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_9F2658E9780F8D2E_METHOD_1_D58D63DF1D1A9525_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_FF522372FB3A5515(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_9F2658E9780F8D2E_METHOD_1_FF522372FB3A5515_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_FA113CD55D99F4AF()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2658E9780F8D2E_METHOD_1_FA113CD55D99F4AF_OFFSET))(this);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_9F2658E9780F8D2E_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}
};
