#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PropertyType.h"
#include "unitysdk/System/Object.h"

class Class_2_B9416AD3CF7CE7E5;
class Class_3_AE02BC8285203464_20;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E99B8D5E9F4AA845_GETPROPERTYFINALVALUE_OFFSET UNITYSDK_OFFSET(0x13D69450)
#define CLASS_1_E99B8D5E9F4AA845_GET_ADVANCE_OFFSET UNITYSDK_OFFSET(0x13D69440)
#define CLASS_1_E99B8D5E9F4AA845_GET_ID_OFFSET UNITYSDK_OFFSET(0x13D69400)
#define CLASS_1_E99B8D5E9F4AA845_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x13D69420)
#define CLASS_1_E99B8D5E9F4AA845_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x13D693F0)
#define CLASS_1_E99B8D5E9F4AA845_GET_STAR_OFFSET UNITYSDK_OFFSET(0x13D69430)
#define CLASS_1_E99B8D5E9F4AA845_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x13D695A0)
#define CLASS_1_E99B8D5E9F4AA845_METHOD_1_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x13D695B0)
#define CLASS_1_E99B8D5E9F4AA845__CTOR_OFFSET UNITYSDK_OFFSET(0x13D69590)

inline static constexpr unsigned int Class_1_E99B8D5E9F4AA845_TypeDefinitionIndex = 61368;

class Class_1_E99B8D5E9F4AA845 : public ::System::Object
{
public:
	::Class_2_B9416AD3CF7CE7E5* Field_1_0; // 0x10
	::System::Int32 Field_1_6; // 0x18
	::System::Int32 Field_1_5; // 0x1C
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845__CTOR_OFFSET))(this);
	}

	::PropertyType get_PropertyType()
	{
		return ((::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Int32 get_ID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_GET_ID_OFFSET))(this);
	}

	::System::Int32 get_Level()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_GET_LEVEL_OFFSET))(this);
	}

	::System::Int32 get_Star()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_GET_STAR_OFFSET))(this);
	}

	::System::Int32 get_Advance()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_GET_ADVANCE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GetPropertyFinalValue(::Class_3_AE02BC8285203464_20* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::Class_3_AE02BC8285203464_20*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_GETPROPERTYFINALVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_B9416AD3CF7CE7E5* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_B9416AD3CF7CE7E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_58BA0C8308C8127F(::Class_2_B9416AD3CF7CE7E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9416AD3CF7CE7E5*))((::PBYTE)hIl2Cpp + CLASS_1_E99B8D5E9F4AA845_METHOD_1_58BA0C8308C8127F_OFFSET))(this, a1);
	}
};
