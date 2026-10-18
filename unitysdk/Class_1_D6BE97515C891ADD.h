#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/RegionType.h"
#include "unitysdk/RPGTools/LDWhiteBox/ShapeType.h"
#include "unitysdk/System/Object.h"

class Class_1_3504AB45DA4192F3;
class Class_1_40D45915D59A3725;
class Class_1_4D55434151194F7F;
class Class_1_973AEE2294153826;
class Class_1_99687E8C8BA89056;
class Class_1_E14CBC48FE052048_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D6BE97515C891ADD__CTOR_OFFSET UNITYSDK_OFFSET(0xB45AAE0)

inline static constexpr unsigned int Class_1_D6BE97515C891ADD_TypeDefinitionIndex = 48936;

class Class_1_D6BE97515C891ADD : public ::System::Object
{
public:
	::Class_1_E14CBC48FE052048_1* Meta; // 0x10
	::System::String* Id; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4D55434151194F7F*>* Connectors; // 0x20
	::Il2CppArray<::Il2CppArray<::System::Single>*>* Polygon; // 0x28
	::Class_1_973AEE2294153826* Polish; // 0x30
	::System::Collections::Generic::List_1<::Class_1_3504AB45DA4192F3*>* RouteNodes; // 0x38
	::System::Collections::Generic::List_1<::Class_1_40D45915D59A3725*>* InternalPaths; // 0x40
	::System::String* Description; // 0x48
	::System::String* Name; // 0x50
	::Class_1_99687E8C8BA89056* Transform; // 0x58
	::Il2CppArray<::System::Single>* Size; // 0x60
	::System::Collections::Generic::List_1<::Class_1_D6BE97515C891ADD*>* ChildrenRegions; // 0x68
	::RPGTools::LDWhiteBox::ShapeType Shape; // 0x70
	::RPGTools::LDWhiteBox::RegionType Type; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6BE97515C891ADD__CTOR_OFFSET))(this);
	}
};
