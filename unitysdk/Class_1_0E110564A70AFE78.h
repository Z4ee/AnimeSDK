#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_869;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E110564A70AFE78_METHOD_1_0F95F254D57FA534_OFFSET UNITYSDK_OFFSET(0xF5E8560)
#define CLASS_1_0E110564A70AFE78_METHOD_1_ADC78A502AB0C238_OFFSET UNITYSDK_OFFSET(0xF5E8800)
#define CLASS_1_0E110564A70AFE78_METHOD_1_FABDAE76D8F05748_OFFSET UNITYSDK_OFFSET(0xF5E8070)

inline static constexpr unsigned int Class_1_0E110564A70AFE78_TypeDefinitionIndex = 77754;

class Class_1_0E110564A70AFE78 : public ::System::Object
{
public:
	static ::Foundation::AssetRequestHandle Method_1_FABDAE76D8F05748(::MoleMole::IVideoPlayer* a1, ::System::String* a2, ::Foundation::AssetRequestHandle& a3, ::System::Boolean a4)
	{
		return ((::Foundation::AssetRequestHandle(*)(::MoleMole::IVideoPlayer*, ::System::String*, ::Foundation::AssetRequestHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_METHOD_1_FABDAE76D8F05748_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* Method_1_0F95F254D57FA534(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5)
	{
		return ((::MoleMole::UIFullScreenVideoV2PopInNormalWindowController*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_METHOD_1_0F95F254D57FA534_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_2_208CC9941471731A_869* Method_1_ADC78A502AB0C238(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_869*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_METHOD_1_ADC78A502AB0C238_OFFSET))(a1);
	}
};
