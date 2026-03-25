#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
class Class_1_2A97E60807F449E7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CFED1AE9FF4FB990_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1069A970)
#define CLASS_1_CFED1AE9FF4FB990_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1069A900)
#define CLASS_1_CFED1AE9FF4FB990_METHOD_1_CB8B0B3D436ACDF0_OFFSET UNITYSDK_OFFSET(0x1069A840)
#define CLASS_1_CFED1AE9FF4FB990__CTOR_OFFSET UNITYSDK_OFFSET(0x1069A800)

inline static constexpr unsigned int Class_1_CFED1AE9FF4FB990_TypeDefinitionIndex = 58329;

class Class_1_CFED1AE9FF4FB990 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2A97E60807F449E7*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFED1AE9FF4FB990__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB8B0B3D436ACDF0(::RPG::Client::ActionBarItemAction a1, ::Class_1_02D30900317D93FD* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_02D30900317D93FD*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CFED1AE9FF4FB990_METHOD_1_CB8B0B3D436ACDF0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFED1AE9FF4FB990_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFED1AE9FF4FB990_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
