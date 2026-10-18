#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_34489C07F511839D;
class Class_1_F9FBCC956DFCF137_12;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E26D5D72F19C4DB_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x16511660)
#define CLASS_1_3E26D5D72F19C4DB_METHOD_1_4D5BEDC75B4151A4_OFFSET UNITYSDK_OFFSET(0x16511680)
#define CLASS_1_3E26D5D72F19C4DB_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x16511670)
#define CLASS_1_3E26D5D72F19C4DB__CTOR_OFFSET UNITYSDK_OFFSET(0x165117A0)

inline static constexpr unsigned int Class_1_3E26D5D72F19C4DB_TypeDefinitionIndex = 62742;

class Class_1_3E26D5D72F19C4DB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_BC950E36747FB4C9, ::Class_1_34489C07F511839D*>* EGMLIDBLHBC; // 0x10
	::Class_1_F9FBCC956DFCF137_12* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB__CTOR_OFFSET))(this);
	}

	::Class_1_F9FBCC956DFCF137_12* get_Factory()
	{
		return ((::Class_1_F9FBCC956DFCF137_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_F9FBCC956DFCF137_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_12*))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_34489C07F511839D* Method_1_4D5BEDC75B4151A4(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::Class_1_34489C07F511839D*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_3E26D5D72F19C4DB_METHOD_1_4D5BEDC75B4151A4_OFFSET))(this, a1);
	}
};
