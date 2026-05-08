#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_884ED93DC98FC7FA;
class Class_2_208CC9941471731A_574;
class Class_2_208CC9941471731A_832;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1395B980)
#define CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x1395B9E0)
#define CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1395B840)
#define CLASS_1_220C85620F1F16CC_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x1395B940)
#define CLASS_1_220C85620F1F16CC_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1395B830)
#define CLASS_1_220C85620F1F16CC_METHOD_1_B979C738815D22CC_OFFSET UNITYSDK_OFFSET(0x1395B8A0)
#define CLASS_1_220C85620F1F16CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1395B690)

inline static constexpr unsigned int Class_1_220C85620F1F16CC_TypeDefinitionIndex = 55166;

class Class_1_220C85620F1F16CC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_884ED93DC98FC7FA*>* Field_1_2; // 0x10
	::Class_2_208CC9941471731A_574* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_832*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_832*>*))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_574* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_574*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_1_B979C738815D22CC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_B979C738815D22CC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_884ED93DC98FC7FA*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_884ED93DC98FC7FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}
};
