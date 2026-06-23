#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_2F26184E3EA01564.h"

namespace UnityEngine { class Camera; }

#define CLASS_2_EB09314323684EFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1172CFD0)
#define CLASS_2_EB09314323684EFC_METHOD_2_BF29D3AC2F9EBD88_OFFSET UNITYSDK_OFFSET(0x1172D250)
#define CLASS_2_EB09314323684EFC_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1172CF90)
#define CLASS_2_EB09314323684EFC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1172D010)
#define CLASS_2_EB09314323684EFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1172D4A0)
#define CLASS_2_EB09314323684EFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1172D480)

inline static constexpr unsigned int Class_2_EB09314323684EFC_TypeDefinitionIndex = 54417;

class Class_2_EB09314323684EFC : public ::Foundation::SingletonDisposable_1<::Class_2_EB09314323684EFC*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EB09314323684EFC_TypeDefinitionIndex)->GetStaticField(0x11340);
	}
	::Struct_2_2F26184E3EA01564 Field_2_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB09314323684EFC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EB09314323684EFC__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB09314323684EFC_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB09314323684EFC_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EB09314323684EFC_UPDATE_OFFSET))(this, a1);
	}

	::Struct_2_2F26184E3EA01564 Method_2_BF29D3AC2F9EBD88(::UnityEngine::Camera* a1)
	{
		return ((::Struct_2_2F26184E3EA01564(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_2_EB09314323684EFC_METHOD_2_BF29D3AC2F9EBD88_OFFSET))(this, a1);
	}
};
