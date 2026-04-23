#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_ADBE1843AD1E672A;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0557563615B51628_METHOD_2_1C64F2B266CA7F0F_OFFSET UNITYSDK_OFFSET(0x12570820)
#define CLASS_2_0557563615B51628__CTOR_OFFSET UNITYSDK_OFFSET(0x125708B0)

inline static constexpr unsigned int Class_2_0557563615B51628_TypeDefinitionIndex = 47898;

class Class_2_0557563615B51628 : public ::Sofa::Core::ObservableObject
{
public:
	::Class_1_ADBE1843AD1E672A* Field_2_2; // 0x18
	::Class_1_ADBE1843AD1E672A* Field_2_1; // 0x20
	::Class_1_ADBE1843AD1E672A* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0557563615B51628__CTOR_OFFSET))(this);
	}

	static ::Class_2_0557563615B51628* Method_2_1C64F2B266CA7F0F(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1)
	{
		return ((::Class_2_0557563615B51628*(*)(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*))((::PBYTE)hIl2Cpp + CLASS_2_0557563615B51628_METHOD_2_1C64F2B266CA7F0F_OFFSET))(a1);
	}
};
