#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_884ED93DC98FC7FA;
class Class_2_208CC9941471731A_191;
class Class_2_208CC9941471731A_406;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x15C9C440)
#define CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x15C9C4A0)
#define CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15C9C3E0)
#define CLASS_1_220C85620F1F16CC_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x15C9C510)
#define CLASS_1_220C85620F1F16CC_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x15C9C500)
#define CLASS_1_220C85620F1F16CC_METHOD_1_B979C738815D22CC_OFFSET UNITYSDK_OFFSET(0x15C9C340)
#define CLASS_1_220C85620F1F16CC__CTOR_OFFSET UNITYSDK_OFFSET(0x15C9C1A0)

inline static constexpr unsigned int Class_1_220C85620F1F16CC_TypeDefinitionIndex = 77976;

class Class_1_220C85620F1F16CC : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_191* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_884ED93DC98FC7FA*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_406*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_406*>*))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_B979C738815D22CC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_B979C738815D22CC_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_191* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_191*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_884ED93DC98FC7FA*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_884ED93DC98FC7FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_220C85620F1F16CC_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
