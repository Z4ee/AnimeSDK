#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine::AI { class NavMeshQueryAsyncOperation; }

#define CLASS_1_A00B784DE48ED0A8_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14F01880)
#define CLASS_1_A00B784DE48ED0A8_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x14F017A0)
#define CLASS_1_A00B784DE48ED0A8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14F01730)
#define CLASS_1_A00B784DE48ED0A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F01790)
#define CLASS_1_A00B784DE48ED0A8__CTOR_OFFSET UNITYSDK_OFFSET(0x14F01780)

inline static constexpr unsigned int Class_1_A00B784DE48ED0A8_TypeDefinitionIndex = 61281;

class Class_1_A00B784DE48ED0A8 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A00B784DE48ED0A8_TypeDefinitionIndex)->GetStaticField(0x11860);
	}
	::System::Threading::CancellationTokenSource* Field_1_0; // 0x10
	::UnityEngine::AI::NavMeshQueryAsyncOperation* Field_1_1; // 0x18
	::System::Int32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00B784DE48ED0A8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A00B784DE48ED0A8__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00B784DE48ED0A8_TOSTRING_OFFSET))(this);
	}

	static ::Class_1_A00B784DE48ED0A8* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_A00B784DE48ED0A8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A00B784DE48ED0A8_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00B784DE48ED0A8_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
