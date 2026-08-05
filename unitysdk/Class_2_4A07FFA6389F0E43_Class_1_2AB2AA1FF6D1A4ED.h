#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_2_4A07FFA6389F0E43_Class_1_81C8BEDA2610C225_2;
class Class_2_6D22DB7CCED0101B;
namespace MoleMole { class BlendTextureSheetDataItem; }

#define CLASS_2_4A07FFA6389F0E43_CLASS_1_2AB2AA1FF6D1A4ED_METHOD_1_73C27A0A98D55DDA_OFFSET UNITYSDK_OFFSET(0x178C0E70)
#define CLASS_2_4A07FFA6389F0E43_CLASS_1_2AB2AA1FF6D1A4ED__CTOR_OFFSET UNITYSDK_OFFSET(0x178C0E60)

inline static constexpr unsigned int Class_2_4A07FFA6389F0E43_Class_1_2AB2AA1FF6D1A4ED_TypeDefinitionIndex = 53781;

class Class_2_4A07FFA6389F0E43_Class_1_2AB2AA1FF6D1A4ED : public ::System::Object
{
public:
	::Class_2_6D22DB7CCED0101B* Field_1_0; // 0x10
	::Class_2_4A07FFA6389F0E43_Class_1_81C8BEDA2610C225_2* Field_1_6; // 0x18
	::MoleMole::BlendTextureSheetDataItem* Field_1_1; // 0x20
	::UnityEngine::Vector4 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A07FFA6389F0E43_CLASS_1_2AB2AA1FF6D1A4ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73C27A0A98D55DDA(::Class_1_5A6771CD0CA2718D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*))((::PBYTE)hIl2Cpp + CLASS_2_4A07FFA6389F0E43_CLASS_1_2AB2AA1FF6D1A4ED_METHOD_1_73C27A0A98D55DDA_OFFSET))(this, a1);
	}
};
