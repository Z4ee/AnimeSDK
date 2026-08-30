#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/ShapeType.h"
#include "unitysdk/System/Object.h"

class Class_1_1E5D0351BE7022BB;
class Class_1_23E2446F4989D753;
class Class_1_40D45915D59A3725;
class Class_1_973AEE2294153826;
class Class_1_99687E8C8BA89056;
class Class_1_E14CBC48FE052048_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_21888EF85248B793__CTOR_OFFSET UNITYSDK_OFFSET(0x16412730)

inline static constexpr unsigned int Class_1_21888EF85248B793_TypeDefinitionIndex = 49379;

class Class_1_21888EF85248B793 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_21888EF85248B793*>* ChildrenRegions; // 0x10
	::System::Collections::Generic::List_1<::Class_1_40D45915D59A3725*>* InternalPaths; // 0x18
	::Class_1_99687E8C8BA89056* Transform; // 0x20
	::System::Collections::Generic::List_1<::Class_1_1E5D0351BE7022BB*>* Connectors; // 0x28
	::System::Collections::Generic::List_1<::Class_1_23E2446F4989D753*>* Junctions; // 0x30
	::System::String* Description; // 0x38
	::Il2CppArray<::System::Single>* Size; // 0x40
	::Class_1_E14CBC48FE052048_1* Meta; // 0x48
	::System::String* Id; // 0x50
	::System::String* Name; // 0x58
	::Class_1_973AEE2294153826* Polish; // 0x60
	::RPGTools::LDWhiteBox::ShapeType Shape; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21888EF85248B793__CTOR_OFFSET))(this);
	}
};
