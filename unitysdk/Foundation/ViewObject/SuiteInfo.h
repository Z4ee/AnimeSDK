#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_SUITEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x80FD30)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x80FCD0)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x80FD40)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x14D74720)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_GET_ISV1_OFFSET UNITYSDK_OFFSET(0x7D31D0)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_GET_ISV2_OFFSET UNITYSDK_OFFSET(0x7D3170)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x80FC80)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x14D74910)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x14D74990)
#define FOUNDATION_VIEWOBJECT_SUITEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x80FD90)
#define FOUNDATION_VIEWOBJECT_SUITEINFO___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x80FDA0)
#define FOUNDATION_VIEWOBJECT_SUITEINFO___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x80FE00)
#define FOUNDATION_VIEWOBJECT_SUITEINFO___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x80FE60)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SuiteInfo_TypeDefinitionIndex = 74047;

	struct alignas(4) SuiteInfo
	{
		::System::UInt32 SuiteVersion; // 0x10
		::System::UInt32 SuiteIndex; // 0x14

		static ::Foundation::ViewObject::SuiteInfo get_Empty()
		{
			return ((::Foundation::ViewObject::SuiteInfo(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_GET_EMPTY_OFFSET))();
		}

		::System::Boolean get_IsV1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_GET_ISV1_OFFSET))(this);
		}

		::System::Boolean get_IsV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_GET_ISV2_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::ViewObject::SuiteInfo other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Foundation::ViewObject::SuiteInfo left, ::Foundation::ViewObject::SuiteInfo right)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::SuiteInfo, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::ViewObject::SuiteInfo left, ::Foundation::ViewObject::SuiteInfo right)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::SuiteInfo, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUITEINFO___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
