#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F6C910)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__COMPAREDATATOOTHER_B__3_0_OFFSET UNITYSDK_OFFSET(0x19F6C960)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__COMPAREDATATOOTHER_B__3_1_OFFSET UNITYSDK_OFFSET(0x19F6C970)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6C950)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__EQUALS_B__4_0_OFFSET UNITYSDK_OFFSET(0x19F6C980)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__EQUALS_B__4_1_OFFSET UNITYSDK_OFFSET(0x19F6C990)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__GETHASHCODE_B__5_0_OFFSET UNITYSDK_OFFSET(0x19F6C9A0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__GETHASHCODE_B__5_1_OFFSET UNITYSDK_OFFSET(0x19F6C9B0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportData___c_TypeDefinitionIndex = 47305;

	class LightSetExportData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportData___c_TypeDefinitionIndex)->GetStaticField(0x6B9C0);
		}
		static ::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportData___c_TypeDefinitionIndex)->GetStaticField(0x6B9C8);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportData___c_TypeDefinitionIndex)->GetStaticField(0x6B9D0);
		}
		static ::ScenenLightManager::LightSetExportData___c** StaticGet___9()
		{
			return (::ScenenLightManager::LightSetExportData___c**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportData___c_TypeDefinitionIndex)->GetStaticField(0x6B9D8);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportData___c_TypeDefinitionIndex)->GetStaticField(0x6B9E0);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportData___c_TypeDefinitionIndex)->GetStaticField(0x6B9E8);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportData___c_TypeDefinitionIndex)->GetStaticField(0x6B9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CompareDataToOther_b__3_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__COMPAREDATATOOTHER_B__3_0_OFFSET))(this, a1);
		}

		::System::Int32 _CompareDataToOther_b__3_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__COMPAREDATATOOTHER_B__3_1_OFFSET))(this, a1);
		}

		::System::Int32 _Equals_b__4_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__EQUALS_B__4_0_OFFSET))(this, a1);
		}

		::System::Int32 _Equals_b__4_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__EQUALS_B__4_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetHashCode_b__5_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__GETHASHCODE_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetHashCode_b__5_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA___C__GETHASHCODE_B__5_1_OFFSET))(this, a1, a2);
		}
	};
}
